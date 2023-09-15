/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:17:38 by larlena           #+#    #+#             */
/*   Updated: 2023/09/15 11:24:07 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_TOOLS_TOOL_HPP
# define EX00_TOOLS_TOOL_HPP

# include <typeinfo>

class Tool {
protected:
	std::size_t	_numberOfUses;
public:
	Tool() : _numberOfUses(0) { }
	Tool(const Tool &other) :
	_numberOfUses(other._numberOfUses) { }
	virtual ~Tool() { }

	virtual void	use(void) = 0;
	virtual Tool	*clone() const = 0;
} ;

void	Tool::use() {
	++_numberOfUses;
}

#endif // EX00_TOOLS_TOOL_HPP
