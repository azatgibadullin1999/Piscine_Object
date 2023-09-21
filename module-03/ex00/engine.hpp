/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:02:14 by larlena           #+#    #+#             */
/*   Updated: 2023/09/19 17:22:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ENGINE_HPP
# define EX00_ENGINE_HPP

class Engine {
private:
	const unsigned int	_idleSpeed;
	const unsigned int	_maximumSpeed;
	const unsigned int	_minimumSpeed;
	unsigned int		_revolutionsPerMinute;
private:
	bool	isStarted() {
		return _revolutionsPerMinute;
	}
public:
	Engine() :
	_idleSpeed(800),
	_maximumSpeed(8000),
	_minimumSpeed(200) { }

	int	start() {
		_revolutionsPerMinute = _idleSpeed;
		return 0;
	}

	int	stop() {
		_revolutionsPerMinute = 0;
		return 0;
	}

	int	accelerated(unsigned int speed) {
		if (!isStarted()) {
			return 1;
		}
		_revolutionsPerMinute += speed;
		return 0;
	}

	int	decelerated(unsigned int speed) {
		if (_revolutionsPerMinute < speed) {
			_revolutionsPerMinute = 0;
		} else {
			_revolutionsPerMinute -= speed;
		}
		if (_revolutionsPerMinute < _minimumSpeed) {
			_revolutionsPerMinute = 0;
			return -1;
		}
		return 0;
	}
} ;

#endif // EX00_ENGINE_HPP