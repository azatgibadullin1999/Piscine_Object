/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:46:01 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 17:21:23 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_PERSON_HPP
# define EX00_PERSON_PERSON_HPP

# include <string>

class Room;

class Person {
private:
	std::string _name;
	Room *_currentRoom;
public:
	Person(std::string p_name);
	Room *room() {
		return _currentRoom;
	}
};

#endif // EX00_PERSON_PERSON_HPP
