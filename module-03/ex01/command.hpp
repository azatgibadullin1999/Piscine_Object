/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:37:43 by larlena           #+#    #+#             */
/*   Updated: 2023/09/26 11:17:59 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_COMMAND_HPP
# define EX01_COMMAND_HPP

class Command {
public:
	enum DateTable {
		kMonday,
		kTuesday,
		kWednesday,
		kThursday,
		kFriday,
		kSaturday,
		kSunday
	};
protected:
	unsigned int	_orderId;
	unsigned int	_date;
	unsigned int	_client;
	unsigned int	_articles;
public:
	Command(unsigned int orderId,
		unsigned int date,
		unsigned int client,
		unsigned int articles) :
	_orderId(orderId),
	_date(date),
	_client(client),
	_articles(articles) { }

	virtual ~Command() { }

	virtual unsigned int	get_total_price(unsigned int price) = 0;
} ;

unsigned int	Command::get_total_price(unsigned int price) {
	return price * _articles;
}

#endif // EX01_COMMAND_HPP
