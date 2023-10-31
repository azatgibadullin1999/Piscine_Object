/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:29:59 by larlena           #+#    #+#             */
/*   Updated: 2023/10/29 20:04:36 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_container.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <queue>

class Sperma { };

int	main() {
	// std::cout << ft::is_container_t< std::vector<int> > << std::endl;
	// std::cout << ft::is_container_t< Sperma > << std::endl;
	// std::cout << ft::is_container_t< std::vector<int> > << std::endl;
	// std::cout << ft::is_container_t< std::map<int, int> > << std::endl;
	// std::cout << ft::is_container_t< std::set<int> > << std::endl;
	// std::cout << ft::is_container_t< std::list<int> > << std::endl;
	// std::cout << ft::is_container_t< std::queue<int> > << std::endl;
	// std::cout << ft::is_container_t< Sperma > << std::endl;

	// auto&&	sperma = ft::is_container_t< std::queue<int> >;

	std::cout << ft::is_container_t<std::vector<int>>() << std::endl;


	return 0;
}