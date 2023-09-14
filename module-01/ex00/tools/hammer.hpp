/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hammer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:27:17 by larlena           #+#    #+#             */
/*   Updated: 2023/09/02 20:15:18 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_TOOLS_HAMMER_HPP
# define EX00_TOOLS_HAMMER_HPP

# include "tool.hpp"

struct Hammer : public Tool {
public:
	Hammer() { }
	~Hammer() { }

	void	use() {
		Tool::use();
		std::cout << "Hammer is used" << std::endl;
	}
} ;

#endif // EX00_TOOLS_HAMMER_HPP
