/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_container.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:02:27 by larlena           #+#    #+#             */
/*   Updated: 2023/10/30 00:16:23 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __UTILS_IS_CONTAINER_HPP__
# define __UTILS_IS_CONTAINER_HPP__

# include <utility>

namespace ft {

template <typename, typename = void>
struct is_container : std::false_type { };

template <typename Container>
struct is_container<Container, std::void_t<
	typename Container::allocator_type,
	typename Container::value_type,
	typename Container::reference,
	typename Container::const_reference,
	typename Container::pointer,
	typename Container::const_pointer,
	typename Container::iterator,
	typename Container::const_iterator,
	typename Container::size_type,
	typename Container::difference_type,
	decltype(std::declval<Container>().begin()),
	decltype(std::declval<Container>().end()),
	decltype(std::declval<Container>().cbegin()),
	decltype(std::declval<Container>().cend())> > : std::true_type { };

template <typename Container>
using is_container_t = typename is_container< Container >::type;

template <typename Container>
using is_container_v = typename is_container< Container >::value;



}

#endif // __UTILS_IS_CONTAINER_HPP__