/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:48:31 by larlena           #+#    #+#             */
/*   Updated: 2023/09/26 12:41:52 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_CIRCLE_HPP
# define EX02_CIRCLE_HPP

# include "shape.hpp"

class Circle : private IShape {
private:
	double	_radius;
public:
	Circle() { }
	virtual ~Circle() { }

	double	calculateArea() {
		return 3.14 * (_radius * _radius);
	}
} ;

#endif // EX02_CIRCLE_HPP