/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wheel.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:04:33 by larlena           #+#    #+#             */
/*   Updated: 2023/09/21 11:57:08 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WHEEL_HPP
# define EX00_WHEEL_HPP

# include <cmath>

class Wheel {
private:
	const int	_maxRotation;
	int	_currentAngle;
public:
	Wheel() :
	_maxRotation(65),
	_currentAngle(0) { }

	~Wheel() { }

	int	turnWheel(int angle) {
		if (abs(angle) > _maxRotation) {
			_currentAngle = (angle - (angle - 1)) * _maxRotation;
			return 1;
		}
		_currentAngle = angle;
		return 0;
	}
	int	straightenWheels() {
		_currentAngle = 0;
	}
} ;

#endif // EX00_WHEEL_HPP