/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workermanager.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:22:27 by larlena           #+#    #+#             */
/*   Updated: 2023/09/14 13:06:27 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WORKERMANAGER_HPP
# define EX00_WORKERMANAGER_HPP

# include <map>
# include "workerproxy.hpp"
# include "workshop.hpp"
# include "worker.hpp"
# include "toolmanager.hpp"
# include "toolproxy.hpp"
# include "tool.hpp"

class WorkerManagerSingleton {
public:
	typedef long				IdType;
	typedef Worker				ValueType;
	typedef std::map< IdType, ValueType >	Container;
private:
	IdType		_idCounter;
	Container	_workers;
private:
	WorkerManagerSingleton() ;
	~WorkerManagerSingleton() ;
	Worker	*getWorker(const IdType &wokrerId) ;
public:
	static WorkerManagerSingleton	&getInstance(void) ;
	WorkerProxy	getProxy(const IdType &workerId) ;
	IdType	addWorker(const Worker &worker) ;
	int	deleteWorker(const IdType &workerId) ;
	int	giveWorkerToWorkshop(Workshop &workshop, const IdType &workerId) ;
	int	removeWorkerFromWorkshop(Workshop &workshop, const IdType &workerId) ;
} ;

#endif // EX00_WORKERMANAGER_HPP