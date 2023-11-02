/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singletons.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:32:02 by larlena           #+#    #+#             */
/*   Updated: 2023/11/02 16:15:58 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_SINGLETONS_HPP__
# define __EX03_SINGLETONS_HPP__

# include <vector>
# include "pattern_base_classes/Singleton.hpp"
# include "containerAdapter.hpp"
# include "person/Student.hpp"
# include "person/Staff.hpp"
# include "room/Room.hpp"
# include "Course.hpp"

class School;

typedef ft::pattern::singleton::SingletonWrapper<School>	SchoolSingleton;

class School {
protected:
public:
	typedef ContainerAdapter< std::shared_ptr<Student> >	StudentsContainers;
	typedef ContainerAdapter< std::shared_ptr<Course> >	CoursesContainers;
	typedef ContainerAdapter< std::shared_ptr<Staff> >	StaffsContainers;
	typedef ContainerAdapter< std::shared_ptr<Room> >	RoomsContainers;
private:
	StudentsContainers	_studentList;
	CoursesContainers	_courseList;
	StaffsContainers	_staffList;
	RoomsContainers		_roomList;
public:
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

#endif // __EX03_SINGLETONS_HPP__