/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   packageReductionDiscount.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:48:52 by larlena           #+#    #+#             */
/*   Updated: 2023/09/26 11:06:03 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_PACKAGE_REDUCTION_DISCOUNT_HPP
# define EX01_PACKAGE_REDUCTION_DISCOUNT_HPP

# include "command.hpp"

class PackageReductionDiscount : private Command {
private:
public:
	PackageReductionDiscount(
		unsigned int orderId,
		unsigned int date,
		unsigned int client,
		unsigned int articles) :
	Command(orderId, date, client, articles) { }

	~PackageReductionDiscount() { }

	unsigned int	get_total_price(unsigned int price) {
		price = Command::get_total_price(price);

		if (price > 150) {
			return price - 10;
		}
		return price;
	}
} ;

#endif // EX01_PACKAGE_REDUCTION_DISCOUNT_HPP
