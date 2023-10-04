/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classroom.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:52:20 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 17:20:31 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ROOM_CLASSROOM_HPP
# define EX00_ROOM_CLASSROOM_HPP

# include "Room.hpp"

class Course;

class Classroom : public Room {
private:
	Course *_currentRoom;
public:
	Classroom();
	void	assignCourse(Course *p_course);
};

#endif // EX00_ROOM_CLASSROOM_HPP
