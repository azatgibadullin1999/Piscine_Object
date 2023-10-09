/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:46:01 by larlena           #+#    #+#             */
/*   Updated: 2023/10/08 16:10:47 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_PERSON_PERSON_HPP
# define EX01_PERSON_PERSON_HPP

# include <string>
# include <memory>

class Room;

class Person {
public:
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

	RoomStoringType	&room() {
		return _currentRoom;
	}
};

#endif // EX01_PERSON_PERSON_HPP
