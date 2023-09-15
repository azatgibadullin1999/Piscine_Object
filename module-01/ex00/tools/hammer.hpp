/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hammer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:27:17 by larlena           #+#    #+#             */
/*   Updated: 2023/09/15 13:12:15 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_TOOLS_HAMMER_HPP
# define EX00_TOOLS_HAMMER_HPP

# include "tool.hpp"

struct Hammer : public Tool {
public:
	Hammer() { }
	Hammer(const Hammer &other) : Tool(other) { }
	~Hammer() { }

	void	use() {
		Tool::use();
		std::cout << "Hammer is used" << std::endl;
	}

	Tool	*clone() const {
		return new Hammer(*this);
	}
} ;

#endif // EX00_TOOLS_HAMMER_HPP
