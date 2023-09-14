/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 23:50:49 by larlena           #+#    #+#             */
/*   Updated: 2023/09/14 15:54:20 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WORKER_HPP
# define EX00_WORKER_HPP

# include <vector>
# include <algorithm>
# include "position.hpp"
# include "statistic.hpp"
# include "shovel.hpp"
# include "hammer.hpp"

class Worker {
private:
	typedef std::vector<Tool *>	Container;
	Position	_coordonnee;
	Statistic	_stat;
	Container	_tools;
public:
	Worker() { }
	~Worker() { }

	void	giveTool(Tool *tool) {
		_tools.push_back(tool);
	}

	void	deleteTool(Tool *tool) {
		_tools.erase(std::find(_tools.begin(), _tools.end(), tool));
	}

	void	work() {
		for (Container::iterator it = _tools.begin(), ite = _tools.end(); it != ite; ++it) {
			(*it)->use();
		}
	}
} ;

#endif // EX00_WORKER_HPP
