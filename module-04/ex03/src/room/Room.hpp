/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:02:54 by larlena           #+#    #+#             */
/*   Updated: 2023/11/06 20:48:33 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_ROOM_ROOM_HPP__
# define __EX03_ROOM_ROOM_HPP__

# include <vector>
# include <memory>

class Person;

class Room {
private:
	long long		ID;
	std::vector<std::shared_ptr<Person>>	_occupants;
public:
	Room() { }
	bool	canEnter(const std::shared_ptr<Person> &person);
	void	enter(const std::shared_ptr<Person> &person);
	void	exit(const std::shared_ptr<Person> &person);
	void	printOccupant();
};

#endif // __EX03_ROOM_ROOM_HPP__
