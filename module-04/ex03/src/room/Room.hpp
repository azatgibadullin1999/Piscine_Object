/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:02:54 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:19:21 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_ROOM_ROOM_HPP__
# define __EX03_ROOM_ROOM_HPP__

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

#endif // __EX03_ROOM_ROOM_HPP__
