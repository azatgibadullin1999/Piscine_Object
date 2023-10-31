/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classroom.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:52:20 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:19:04 by larlena          ###   ########.fr       */
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
	Classroom();
	void	assignCourse(Course *p_course);
};

#endif // __EX03_ROOM_CLASSROOM_HPP__
