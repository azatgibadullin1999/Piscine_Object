/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singletons.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:32:02 by larlena           #+#    #+#             */
/*   Updated: 2023/10/08 11:08:07 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_SINGLETONS_HPP
# define EX01_SINGLETONS_HPP

# include <vector>
# include "person/Student.hpp"
# include "person/Staff.hpp"
# include "Course.hpp"
# include "room/Room.hpp"
# include "containerAdapter.hpp"

class SchoolSingleton {
public:
	typedef Student	Student;
	typedef Course	Course;
	typedef Staff	Staff;
	typedef Room	Room;
	typedef ContainerAdapter< std::shared_ptr<Student> >	StudentsContainers;
	typedef ContainerAdapter< std::shared_ptr<Course> >	CoursesContainers;
	typedef ContainerAdapter< std::shared_ptr<Staff> >	StaffsContainers;
	typedef ContainerAdapter< std::shared_ptr<Room> >	RoomsContainers;
private:
	StudentsContainers	_studentList;
	CoursesContainers	_courseList;
	StaffsContainers	_staffList;
	RoomsContainers		_roomList;
private:
	SchoolSingleton() { }
public:
	~SchoolSingleton() { }

	static SchoolSingleton	&getInstance() {
		static SchoolSingleton	instance;

		return instance;
	}

	StudentsContainers	&getStudents() {
		return _studentList;
	}

	CoursesContainers	&getCourses() {
		return _courseList;
	}

	StaffsContainers	&getStaffs() {
		return _staffList;
	}

	RoomsContainers		&getRooms() {
		return _roomList;
	}
};

#endif // EX01_SINGLETONS_HPP