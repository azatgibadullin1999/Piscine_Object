/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brake.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:28:13 by larlena           #+#    #+#             */
/*   Updated: 2023/09/21 11:39:46 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_BRAKE_HPP
# define EX00_BRAKE_HPP

class Brake {
private:
	const unsigned int	_maxForse;
	unsigned int	_currentForse;
public:
	Brake() : _maxForse(1000) { }
	~Brake();

	int	applyForceOnBrakes(unsigned int forse) {
		if (forse > _maxForse) {
			_currentForse = _maxForse;
			return 1;
		}
		_currentForse = forse;
		return 0;
	}

	int	applyEmergencyBrakes() {
		_currentForse = _maxForse;
		return 0;
	}
} ;

#endif // EX00_BRAKE_HPP