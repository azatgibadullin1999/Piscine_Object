/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolproxy.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:32:19 by larlena           #+#    #+#             */
/*   Updated: 2023/09/14 12:08:16 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PROXYCLASSES_TOOLPROXY_HPP
# define EX00_PROXYCLASSES_TOOLPROXY_HPP

# include "tool.hpp"
# include "workermanager.hpp"

class ToolProxy {
	friend class ToolManagerSingleton;
private:
	Tool	* const _tool;
private:
	Tool	*getTool() {
		return _tool;
	}

	Tool	&operator * () {
		return *_tool;
	}

	Tool	*operator -> () {
		return _tool;
	}
public:
	ToolProxy(Tool * const &tool) :
	_tool(tool) { }

	const Tool	*getTool() const {
		return _tool;
	}

	const Tool	&operator * () const {
		return *_tool;
	}

	const Tool	*operator -> () const {
		return _tool;
	}
} ;

#endif // EX00_PROXYCLASSES_TOOLPROXY_HPP