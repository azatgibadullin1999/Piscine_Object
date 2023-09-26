/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:28:20 by larlena           #+#    #+#             */
/*   Updated: 2023/09/26 12:40:29 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_TRIANGLE_HPP
# define EX02_TRIANGLE_HPP

# include "shape.hpp"

class Triangle : private IShape {
private:
	double	_edgeA;
	double	_edgeB;
	double	_edgeC;
public:
	Triangle() { }
	virtual ~Triangle() { }

	double	calculateArea() {
		double leg1, leg2;

		if (_edgeA > _edgeB && _edgeA > _edgeC) {
			leg1 = _edgeB;
			leg2 = _edgeC;
		} else if (_edgeB > _edgeA && _edgeB > _edgeC) {
			leg1 = _edgeA;
			leg2 = _edgeC;
		} else {
			leg1 = _edgeA;
			leg2 = _edgeB;
		}
		return (leg1 * leg2) / 2;
	}
} ;

#endif // EX02_TRIANGLE_HPP