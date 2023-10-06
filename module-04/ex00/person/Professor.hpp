/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:04 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 14:28:14 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_PROFESSOR_HPP
# define EX00_PERSON_PROFESSOR_HPP

# include "Staff.hpp"
# include "Course.hpp"
class Professor : public Staff {
public:
	typedef std::shared_ptr<Course>	CourseStoringType;
private:
	CourseStoringType	_currentCourse;
public:
	Professor(const NameStoringType &name) :
	Staff(name) { }

	Professor(NameStoringType &&name) :
	Staff(std::move(name)) { }

	void	assignCourse(const CourseStoringType &course) {
		// course->assign(this);
	}

	void	doClass() {

	}

	void	closeCourse() {

	}
};

#endif // EX00_PERSON_PROFESSOR_HPP
