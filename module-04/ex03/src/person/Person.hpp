/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:46:01 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:18:30 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_PERSON_HPP__
# define __EX03_PERSON_PERSON_HPP__

# include <string>
# include <memory>
# include "MediatorOfPerson.hpp"

class Room;

class Person : public ft::pattern::mediator::BaseComponent<Person> {
public:
	typedef std::shared_ptr<Person>	pointer;
	typedef std::string		NameStoringType;
	typedef std::shared_ptr<Room>	RoomStoringType;
private:
	NameStoringType	_name;
	RoomStoringType	_currentRoom;
public:
	Person(const NameStoringType &name) :
	_name(name),
	_currentRoom(nullptr) { }

	Person(NameStoringType &&name) :
	_name(std::move(name)),
	_currentRoom(nullptr) { }

	const std::string	&getName() const {
		return _name;
	}

	void	setRoom(std::shared_ptr<Room> &room) {
		_currentRoom = room;
	}

	const std::shared_ptr<Room>	&getRoom() const {
		return _currentRoom;
	}
};

#endif // __EX03_PERSON_PERSON_HPP__
