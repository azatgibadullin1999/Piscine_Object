/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mediator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:50:19 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:35:45 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PATTERN_BASE_CLASSES_MEDIATOR_HPP__
# define __PATTERN_BASE_CLASSES_MEDIATOR_HPP__

# include <memory>
# include <string>

namespace ft { namespace pattern { namespace mediator {

template <typename BaseClass>
class IMediator {
protected:
	IMediator() { }

	virtual std::shared_ptr<IMediator<BaseClass>>	getThis() = 0;

	template <typename ... Args>
	void	setMediators(Args&& ... args) {
		(args->setMediator(getThis()), ...);
	}
public:
	virtual ~IMediator() { }
	virtual void	notify(std::shared_ptr<BaseClass> component, const std::string &event) = 0;
};

// Class that contains std::shared_ptr of IMediator
// and give interface for set mediator
template <typename BaseClass>
class BaseComponent {
private:
	std::shared_ptr<IMediator<BaseClass>>	_mediator;
protected:
	BaseComponent() noexcept { }
	const std::shared_ptr<IMediator<BaseClass>>	&getMediator() noexcept {
		return _mediator;
	}
public:
	virtual ~BaseComponent() { }

	void	setMediator(const std::shared_ptr<IMediator<BaseClass>> &mediator) noexcept {
		if (!_mediator) {
			_mediator = mediator;
		}
	}

	void	unsetMediator(const std::shared_ptr<IMediator<BaseClass>> &mediator) noexcept {
		_mediator = nullptr;
	}
};

} } } // namespace ft::pattern::mediator

#endif // __PATTERN_BASE_CLASSES_MEDIATOR_HPP__