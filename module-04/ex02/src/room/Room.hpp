/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:02:54 by larlena           #+#    #+#             */
/*   Updated: 2023/10/08 11:51:04 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ROOM_ROOM_HPP
# define EX01_ROOM_ROOM_HPP

# include <vector>

class Person;

class Room {
private:
	long long		ID;
	std::vector<Person *>	_occupants;
public:
	Room() { }
	bool	canEnter(Person *);
	void	enter(Person *);
	void	exit(Person *);
	void	printOccupant();
};

#endif // EX01_ROOM_ROOM_HPP
