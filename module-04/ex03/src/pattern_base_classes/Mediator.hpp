/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mediator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:50:19 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 22:06:22 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PATTERN_BASE_CLASSES_MEDIATOR_HPP__
# define __EX03_PATTERN_BASE_CLASSES_MEDIATOR_HPP__

# include <memory>
# include <string>

namespace ft { namespace pattern { namespace mediator {

template <typename BaseClass>
class IMediator : public std::enable_shared_from_this<IMediator<BaseClass>> {
protected:
	IMediator() { }

	template <typename ... Args>
	void	setMediators(Args&& ... args) {
		(args->setMediator(this->shared_from_this()), ...);
	}
public:
	virtual ~IMediator() { }
	virtual void	notify(std::shared_ptr<BaseClass> component, const std::string &event) = 0;
};

// Class that contains std::shared_ptr of IMediator
// and give interface for set mediator
template <typename BaseClass>
class BaseComponent : public std::enable_shared_from_this<BaseClass> {
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
		_mediator = mediator;
	}
};

} } } // namespace ft::pattern::mediator

#endif // __EX03_PATTERN_BASE_CLASSES_MEDIATOR_HPP__