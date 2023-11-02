/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classroom.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:52:20 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:28:36 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_ROOM_CLASSROOM_HPP__
# define __EX03_ROOM_CLASSROOM_HPP__

# include "Room.hpp"

class Course;

class Classroom : public Room {
private:
	Course *_currentRoom;
public:
	Classroom() { }
	~Classroom() { }
	void	assignCourse(Course *p_course);
};

#endif // __EX03_ROOM_CLASSROOM_HPP__
