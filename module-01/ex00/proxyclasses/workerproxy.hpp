/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workerproxy.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:32:53 by larlena           #+#    #+#             */
/*   Updated: 2023/09/14 12:08:01 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PROXYCLASSES_WORKERPROXY_HPP
# define EX00_PROXYCLASSES_WORKERPROXY_HPP

# include "worker.hpp"
# include "toolmanager.hpp"

class WorkerProxy {
	friend class ToolManagerSingleton;
private:
	Worker	* const _worker;
private:
	Worker	*getWorker() {
		return _worker;
	}

	Worker	&operator * () {
		return *_worker;
	}

	Worker	*operator -> () {
		return _worker;
	}
public:
	WorkerProxy(Worker * const &worker) :
	_worker(worker) { }

	const Worker	*getWorker() const {
		return _worker;
	}

	const Worker	&operator * () const {
		return *_worker;
	}

	const Worker	*operator -> () const {
		return _worker;
	}
} ;

#endif // EX00_PROXYCLASSES_WORKERPROXY_HPP