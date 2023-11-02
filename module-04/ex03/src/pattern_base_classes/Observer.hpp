/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Observer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:03:00 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 17:38:51 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PATTERN_BASE_CLASSES_OBSERVER_HPP__
# define __EX03_PATTERN_BASE_CLASSES_OBSERVER_HPP__

# include <vector>
# include <memory>
# include <algorithm>
# include "Factory.hpp"
# include "../utils/utils.hpp"

namespace ft { namespace pattern { namespace observer {

class IObserver;

template <typename Container = std::vector<std::shared_ptr<IObserver>>>
class SubjectBase : public std::enable_shared_from_this<SubjectBase> {
public:
	typedef Container	container_type;
private:
	container_type	_observers;
protected:
	SubjectBase() noexcept { }
public:
	virtual ~SubjectBase() { }
	virtual void	attach(const std::shared_ptr<IObserver> &observer) {
		ft::append(_observers, observer);
	}

	virtual void	detach(const std::shared_ptr<IObserver> &observer) {
		_observers.erase(std::find(_observers.begin(), _observers.end(), observer));
	}

	virtual void	notify() {
		// std::for_each(_observers.begin(), _observers.end(), [&&smart_this = shared_from_this()](container_type::reference observer){observer->update(smart_this)});
		for (auto&& it : _observers) {
			it->update(shared_from_this());
		}
	}
};

class IObserver {
protected:
	IObserver() noexcept { }
public:
	virtual ~IObserver() { }
	virtual void	update(std::shared_ptr<SubjectBase<>> subject) = 0;
};

} } } // namespace ft::pattern::observer

#endif // __EX03_PATTERN_BASE_CLASSES_OBSERVER_HPP__
