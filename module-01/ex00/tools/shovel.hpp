/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shovel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 00:05:50 by larlena           #+#    #+#             */
/*   Updated: 2023/09/15 13:12:04 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_TOOLS_SHOVEL_HPP
# define EX00_TOOLS_SHOVEL_HPP

# include "tool.hpp"
# include <iostream>

struct Shovel : public Tool {
public:
	Shovel() { }
	Shovel(const Shovel &other) : Tool(other) { }
	~Shovel() { }

	void	use() {
		Tool::use();
		std::cout << "shovel is used" << std::endl;
	}

	Tool	*clone() const {
		return new Shovel(*this);
	}
} ;

#endif // EX00_TOOLS_SHOVEL_HPP
