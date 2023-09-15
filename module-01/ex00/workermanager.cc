/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workermanager.cc                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:05:19 by larlena           #+#    #+#             */
/*   Updated: 2023/09/15 13:16:30 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "workermanager.hpp"

WorkerManagerSingleton::WorkerManagerSingleton() :
_idCounter(0) { }

WorkerManagerSingleton::~WorkerManagerSingleton() { }



WorkerManagerSingleton	&WorkerManagerSingleton::getInstance(void) {
	static WorkerManagerSingleton	workerManager;

	return workerManager;
}

WorkerProxy	WorkerManagerSingleton::getProxy(const IdType &workerId) {
	Container::iterator	it = _workers.find(workerId);

	if (it == _workers.end()) {
		return WorkerProxy(NULL);
	}
	return WorkerProxy(&it->second);
}

Worker	*WorkerManagerSingleton::getWorker(const IdType &workerId) {
	Container::iterator	it = _workers.find(workerId);

	if (it == _workers.end()) {
		return NULL;
	}
	return &it->second;
}

WorkerManagerSingleton::IdType	WorkerManagerSingleton::addWorker(const Worker &worker) {
	try {
		return _workers.insert(std::pair<const std::size_t, Worker>(_idCounter++, worker)).first->first;
	} catch (std::exception &e) {
		return -1;
	}
}

int	WorkerManagerSingleton::deleteWorker(const IdType &workerId) {
	_workers.erase(workerId);
}

int	WorkerManagerSingleton::giveWorkerToWorkshop(Workshop &workshop, const IdType &workerId) {
	try {
		Worker	*worker = getWorker(workerId);

		if (worker == NULL) {
			throw std::exception();
		}
		workshop.addWorker(worker);
	} catch (std::exception &e) {
		return -1;
	}
	return 0;
}

int	WorkerManagerSingleton::removeWorkerFromWorkshop(Workshop &workshop, const IdType &workerId) {
	Worker	*worker = getWorker(workerId);

	if (worker == NULL) {
		return -1;
	}
	workshop.removeWorker(worker);
}