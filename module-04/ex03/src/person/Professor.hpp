/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:04 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 19:05:43 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_PROFESSOR_HPP__
# define __EX03_PERSON_PROFESSOR_HPP__

// # include "Staff.hpp"
# include "../Course.hpp"

class Staff;

class ProfessorBase : public Staff {
public:
	typedef std::shared_ptr<Course>	CourseStoringType;
private:
	CourseStoringType	_currentCourse;
public:
	using Staff::Staff;

	void	assignCourse(const CourseStoringType &course) {
		_currentCourse = course;
	}

	void	doClass() {
		if (_currentCourse == nullptr) {
			getMediator()->notify(shared_from_this(), "have no courses");
		}
		if (getRoom() == nullptr) {
			getMediator()->notify(shared_from_this(), "have no room");
		}
	}

	void	closeCourse() { }
};

using Professor = ft::pattern::factory::FactoryWrapper<ProfessorBase>;

#endif // __EX03_PERSON_PROFESSOR_HPP__
