/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:46:01 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 09:47:14 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_PERSON_HPP__
# define __EX03_PERSON_PERSON_HPP__

# include <string>
# include <memory>
# include "../pattern_base_classes/Mediator.hpp"

class Room;

class Person :
	public ft::pattern::mediator::BaseComponent<Person>,
	public std::enable_shared_from_this<Person> {
private:
	std::string		_name;
	std::shared_ptr<Room>	_currentRoom;
protected:
	Person(const std::string &name) :
	_name(name),
	_currentRoom(nullptr) { }

	Person(std::string &&name) :
	_name(std::move(name)),
	_currentRoom(nullptr) { }
public:
	virtual ~Person() { }

	const std::string	&getName() const {
		return _name;
	}

	void	setRoom(const std::shared_ptr<Room> &room) {
		_currentRoom = room;
	}

	const std::shared_ptr<Room>	&getRoom() const {
		return _currentRoom;
	}
};

#endif // __EX03_PERSON_PERSON_HPP__
