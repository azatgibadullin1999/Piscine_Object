/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thuesdayDiscount.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:52:48 by larlena           #+#    #+#             */
/*   Updated: 2023/09/26 11:18:04 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_THUESDAY_DISCOUNT_HPP
# define EX01_THUESDAY_DISCOUNT_HPP

# include "command.hpp"

class ThuesdayDiscount : private Command {
private:
public:
	ThuesdayDiscount(
		unsigned int orderId,
		unsigned int date,
		unsigned int client,
		unsigned int articles) :
	Command(orderId, date, client, articles) { }

	~ThuesdayDiscount() { }

	unsigned int	get_total_price(unsigned int price) {
		price = Command::get_total_price(price);

		if (_date == kTuesday) {
			return price - ((price / 100) * 10);
		}
		return price;
	}
} ;

#endif // EX01_THUESDAY_DISCOUNT_HPP