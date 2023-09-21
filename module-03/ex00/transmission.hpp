/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transmission.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:06:34 by larlena           #+#    #+#             */
/*   Updated: 2023/09/21 11:14:47 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_TRANSMISSION_HPP
# define EX00_TRANSMISSION_HPP

# include <vector>
# include <utility>

class Transmission {
private:
	typedef std::pair< float, float >	gearType;
private:
	std::vector< gearType >	_gears;
	std::size_t	_currentGear;
public:
	Transmission() : _currentGear(1) {
		_gears.push_back(gearType(-1.2, -0.8));
		_gears.push_back(gearType(0, 0));
		_gears.push_back(gearType(1.2, 0.8));
		_gears.push_back(gearType(1.5, 0.5));
	}

	~Transmission() { }

	int	shiftGearsUp() {
		if ((_currentGear - 1) < _gears.size()) {
			++_currentGear;
		}
		return 0;
	}

	int	shiftGearsDown() {
		if (_currentGear != 0) {
			--_currentGear;
		}
		return 0;
	}

	int	reverse() {
		_currentGear = 0;
		return 0;
	}
};

#endif // EX00_TRANSMISSION_HPP