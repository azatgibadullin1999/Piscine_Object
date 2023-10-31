/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Command.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:05:58 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:16:57 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PATTERN_BASE_CLASSES_COMMAND_HPP__
# define __EX03_PATTERN_BASE_CLASSES_COMMAND_HPP__

namespace ft { namespace pattern { namespace command {

class ICommand {
protected:
	ICommand() noexcept { }
public:
	virtual ~ICommand() { }
	virtual void	execute() = 0;
};

} } }// namespace ft::pattern::command

#endif // __EX03_PATTERN_BASE_CLASSES_COMMAND_HPP__