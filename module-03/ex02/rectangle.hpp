/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:46:25 by larlena           #+#    #+#             */
/*   Updated: 2023/09/26 12:35:54 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_RECTANGLE_HPP
# define EX02_RECTANGLE_HPP

# include "shape.hpp"

class Rectangle : private IShape {
private:
	double	_edgeA;
	double	_edgeB;
public:
	Rectangle() { }
	virtual ~Rectangle() { }

	double	calculateArea() {
		return _edgeA * _edgeB;
	}
} ;

#endif // EX02_RECTANGLE_HPP