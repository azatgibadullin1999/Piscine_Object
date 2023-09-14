/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:17:38 by larlena           #+#    #+#             */
/*   Updated: 2023/09/02 19:51:34 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_TOOLS_TOOL_HPP
# define EX00_TOOLS_TOOL_HPP

# include <typeinfo>

class Tool {
protected:
	std::size_t	numberOfUses;
public:
	Tool() : numberOfUses(0) { }
	virtual ~Tool() { }

	virtual void	use(void) = 0;
} ;

void	Tool::use() {
	++numberOfUses;
}

#endif // EX00_TOOLS_TOOL_HPP
