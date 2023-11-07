/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Patterns.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:29:27 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:46:54 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PATTERN_BASE_CLASSES_PATTERNS_HPP__
# define __PATTERN_BASE_CLASSES_PATTERNS_HPP__

namespace ft::patterns {
namespace singleton {
template <typename WrappedClass>
class SingletonWrapper;
} // namespace singleton
namespace command {
class ICommand;
} // namespace command
namespace observer {
class IObserver;
class Subject;
} // namespace observer
namespace mediator {
template <typename BaseClass>
class BaseComponent;
template <typename BaseClass>
class IMediator;
} // namespace mediator
namespace factory {
template <typename BaseClass>
class IFactory;
template <typename BaseClass, typename DerivedClass>
class StandardFactory;
template <typename WrappedClass>
class FactoryWrapper;
template <typename InheritedClass, typename BaseClass>
class SharedFromThisFactory;
} // namespace factory
} // namespace ft::patterns

#endif // __PATTERN_BASE_CLASSES_PATTERNS_HPP__