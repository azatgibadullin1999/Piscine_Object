/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:04 by larlena           #+#    #+#             */
/*   Updated: 2023/10/08 15:39:31 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_PERSON_PROFESSOR_HPP
# define EX01_PERSON_PROFESSOR_HPP

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
	}

	void	doClass() {
	}

	void	closeCourse() {
	}
};

#endif // EX01_PERSON_PROFESSOR_HPP
