/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolmanager.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:58:06 by larlena           #+#    #+#             */
/*   Updated: 2023/09/15 13:41:21 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_TOOLMANAGER_HPP
# define EX00_TOOLMANAGER_HPP

# include <map>
# include <memory>
# include <utility>
# include <sys/types.h>
# include "workermanager.hpp"
# include "proxyclasses/toolproxy.hpp"
# include "tools/hammer.hpp"
# include "tools/shovel.hpp"
# include "tools/tool.hpp"

class ToolManagerSingleton {
private:
	typedef long				IdType;
	typedef std::pair< Tool *, Worker *>	ValueType;
	typedef std::map< IdType, ValueType >	Container;
private:
	ToolManagerSingleton() ;
	~ToolManagerSingleton() ;
	ValueType	*getValue(const IdType &toolId) ;
private:
	std::size_t	_idCounter;
	Container	_tools;
public:
	static ToolManagerSingleton	&getInstance(void) ;
	ToolProxy	getProxy(const IdType &toolId) ;
	int	addTool(const Tool &tool) ;
	void	deleteTool(const IdType &toolId) ;
	int	giveToolToWorker(const WorkerManagerSingleton::IdType &workerId, const IdType &toolId) ;
	void	removeToolFromWorker(const WorkerManagerSingleton::IdType &workerId, const IdType &toolId) ;
} ;

#endif // EX00_TOOLMANAGER_HPP