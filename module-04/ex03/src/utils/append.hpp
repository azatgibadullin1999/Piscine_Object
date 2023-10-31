/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:32:37 by larlena           #+#    #+#             */
/*   Updated: 2023/10/30 00:16:34 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __UTILS_INSERT_HPP__
# define __UTILS_INSERT_HPP__

# include <utility>

namespace ft {

template <typename Container, typename Value, typename = std::void_t<decltype(std::declval<Container>().push_back(std::declval<Value>()))>>
void	append(Container &&cont, Value &&val) {
	cont.push_back(std::forward<Value>(val));
}

template <typename Container, typename Value>
void	append(Container &&cont, Value &&val) {
	cont.insert(std::forward<Value>(val));
}

}

#endif // __UTILS_INSERT_HPP__