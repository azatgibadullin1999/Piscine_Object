/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolmanager.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:58:06 by larlena           #+#    #+#             */
/*   Updated: 2023/09/14 15:11:47 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_TOOLMANAGER_HPP
# define EX00_TOOLMANAGER_HPP

# include <map>
# include <utility>
# include <sys/types.h>
# include "toolproxy.hpp"
# include "hammer.hpp"
# include "shovel.hpp"
# include "tool.hpp"
# include "workermanager.hpp"
# include "worker.hpp"

class ToolManagerSingleton {
private:
	typedef long				IdType;
	typedef std::pair< Tool, Worker *>	ValueType;
	typedef std::map< IdType, ValueType >	Container;
private:
	ToolManagerSingleton() ;
	~ToolManagerSingleton() ;
	ValueType	*getValue(const IdType &toolId) ;
private:
	std::size_t	_idCounter;
	Container	_tools;
public:
	static ToolManagerSingleton	&getInstance(void) ;
	ToolProxy	getProxy(const IdType &toolId) ;
	int	addTool(const Tool &tool) ;
	void	deleteTool(const IdType &toolId) ;
	int	giveToolToWorker(const WorkerManagerSingleton::IdType &workerId, const IdType &toolId) ;
	void	removeToolFromWorker(const WorkerManagerSingleton::IdType &workerId, const IdType &toolId) ;
} ;

#endif // EX00_TOOLMANAGER_HPP