/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   car.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:37:40 by larlena           #+#    #+#             */
/*   Updated: 2023/09/21 12:02:59 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_CAR_HPP
# define EX00_CAR_HPP

# include <utility>
# include "engine.hpp"
# include "brake.hpp"
# include "wheel.hpp"
# include "transmission.hpp"

class CarFacade {
private:
	Engine		_engine;
	Brake		_brake;
	Transmission	_transmission;
	Wheel		_wheels;
public:
	CarFacade() { }
	~CarFacade() { }

	int	start() {
		_engine.start();
	}

	int	stop() {
		_engine.stop();
	}

	int	accelerated(unsigned int speed) {
		_engine.accelerated(speed);	
	}

	int	shiftGearsUp() {
		_transmission.shiftGearsUp();
	}

	int	shiftGearsDown() {
		_transmission.shiftGearsDown();
	}

	int	reverse() {
		_transmission.reverse();
	}

	int	turnWheel(int angle) {
		_wheels.turnWheel(angle);
	}

	int	straightenWheels() {
		_wheels.straightenWheels();
	}

	int	applyForceOnBrakes(unsigned int forse) {
		_brake.applyForceOnBrakes(forse);
	}

	int	applyEmergencyBrakes() {
		_brake.applyEmergencyBrakes();
	}
} ;

#endif // EX00_CAR_HPP