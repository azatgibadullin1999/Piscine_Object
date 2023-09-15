/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolmanager.cc                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:05:33 by larlena           #+#    #+#             */
/*   Updated: 2023/09/15 13:17:26 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolmanager.hpp"

ToolManagerSingleton::ToolManagerSingleton() :
_idCounter(0) { }

ToolManagerSingleton::~ToolManagerSingleton() {
	for (Container::iterator it = _tools.begin(), ite = _tools.end(); it != ite; ++it) {
		delete it->second.first;
	}
}

ToolManagerSingleton	&ToolManagerSingleton::getInstance(void) {
	static ToolManagerSingleton	toolManager;

	return toolManager;
}

ToolManagerSingleton::ValueType	*ToolManagerSingleton::getValue(const IdType &toolId) {
	Container::iterator	it = _tools.find(toolId);

	if (it == _tools.end()) {
		return NULL;
	}
	return &it->second;
}

ToolProxy	ToolManagerSingleton::getProxy(const IdType &toolId) {
	Container::iterator	it = _tools.find(toolId);

	if (it == _tools.end()) {
		return ToolProxy(NULL);
	}
	return ToolProxy(it->second.first);
}

int	ToolManagerSingleton::addTool(const Tool &tool) {
	try {
		return _tools.insert(std::pair< IdType, ValueType >(_idCounter, ValueType(tool.clone(), NULL))).first->first;
	} catch (std::exception &e) {
		return -1;
	}
}

void	ToolManagerSingleton::deleteTool(const IdType &toolId) {
	ValueType	*value = getValue(toolId);

	if (value == NULL) {
		return ;
	}
	delete value->first;
	_tools.erase(toolId);
}

int	ToolManagerSingleton::giveToolToWorker(const WorkerManagerSingleton::IdType &workerId, const IdType &toolId) {
	try {
		WorkerProxy	worker = WorkerManagerSingleton::getInstance().getProxy(workerId);
		ValueType	*value = getValue(toolId);

		if (value == NULL || worker.getWorker() == NULL) {
			throw std::exception();
		}
		if (value->second != NULL) {
			value->second->deleteTool(value->first);
		}
		worker->giveTool(value->first);
		value->second = worker.getWorker();
	} catch (std::exception &e) {
		return -1;
	}
	return 0;
}

void	ToolManagerSingleton::removeToolFromWorker(const WorkerManagerSingleton::IdType &workerId, const IdType &toolId) {
	ValueType	*value = getValue(toolId);
	WorkerProxy	worker = WorkerManagerSingleton::getInstance().getProxy(workerId);

	if (worker.getWorker() == NULL) {
		return ;
	}
	worker->deleteTool(value->first);
	value->second = NULL;
}