/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:54:05 by larlena           #+#    #+#             */
/*   Updated: 2023/09/15 12:50:30 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WORKSHOP_HPP
# define EX00_WORKSHOP_HPP

# include <vector>
# include <algorithm>
# include "worker.hpp"

class Workshop {
private:
	typedef std::vector<Worker *>	Container;
private:
	Container	_workers;
public:
	Workshop() { }
	~Workshop() { }

	void	addWorker(Worker *worker) {
		_workers.push_back(worker);
	}

	void	removeWorker(Worker *worker) {
		_workers.erase(std::find(_workers.begin(), _workers.end(), worker));
	}

	void	executeWorkDay() {
		for (Container::iterator it = _workers.begin(), ite = _workers.end(); it != ite; ++it) {
			(*it)->work();
		}
	}
} ;

#endif // EX00_WORKSHOP_HPP