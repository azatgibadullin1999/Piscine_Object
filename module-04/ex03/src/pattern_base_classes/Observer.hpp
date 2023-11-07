/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Observer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:03:00 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:30:36 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PATTERN_BASE_CLASSES_OBSERVER_HPP__
# define __PATTERN_BASE_CLASSES_OBSERVER_HPP__

# include <vector>
# include <memory>
# include <algorithm>

namespace ft { namespace pattern { namespace observer {

class Subject;

class IObserver {
protected:
	IObserver() noexcept { }
public:
	virtual ~IObserver() { }
	virtual void	update(std::shared_ptr<Subject> subject) = 0;
};

class Subject {
public:
	typedef std::vector<std::shared_ptr<IObserver>>	container_type;
private:
	container_type	_observers;
protected:
	Subject() noexcept { }

	virtual std::shared_ptr<Subject>	getThis() = 0;
public:
	virtual ~Subject() { }
	virtual void	attach(const std::shared_ptr<IObserver> &observer) {
		_observers.push_back(observer);
	}

	virtual void	detach(const std::shared_ptr<IObserver> &observer) {
		_observers.erase(std::find(_observers.begin(), _observers.end(), observer));
	}

	virtual void	notify() {
		for (auto&& it : _observers) {
			it->update(getThis());
		}
	}
};

} } } // namespace ft::pattern::observer

#endif // __PATTERN_BASE_CLASSES_OBSERVER_HPP__
