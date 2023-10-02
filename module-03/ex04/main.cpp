/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:59:02 by larlena           #+#    #+#             */
/*   Updated: 2023/10/02 15:39:14 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ILogger.hpp"
# include "StreamLogger.hpp"
# include "FileLogger.hpp"

int	main() {
	ILogger::IFactory	*factory1 = new StreamLogger::Factory();
	ILogger::IFactory	*factory2 = new FileLogger::Factory();


	factory1->create();
	factory2->create();

	return 0;
}