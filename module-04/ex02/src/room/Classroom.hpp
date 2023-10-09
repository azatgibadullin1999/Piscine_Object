/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classroom.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:52:20 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 14:49:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ROOM_CLASSROOM_HPP
# define EX01_ROOM_CLASSROOM_HPP

# include "Room.hpp"

class Course;

class Classroom : public Room {
private:
	Course *_currentRoom;
public:
	Classroom();
	void	assignCourse(Course *p_course);
};

#endif // EX01_ROOM_CLASSROOM_HPP
