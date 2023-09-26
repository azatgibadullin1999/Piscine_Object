/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:23:53 by larlena           #+#    #+#             */
/*   Updated: 2023/09/26 11:50:08 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_SHAPE_HPP
# define EX02_SHAPE_HPP

class IShape {
private:
public:
	IShape() { }
	virtual ~IShape() { }

	virtual double	calculateArea() = 0;
};

#endif // EX02_SHAPE_HPP