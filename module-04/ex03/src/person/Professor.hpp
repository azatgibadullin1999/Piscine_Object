/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:04 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:13:34 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_PROFESSOR_HPP__
# define __EX03_PERSON_PROFESSOR_HPP__

# include "Staff.hpp"
# include "../pattern_base_classes/Factory.hpp"

class Course;
class ProfessorBase;

namespace ft { namespace details {

class ProfessorBase : public Staff {
private:
	std::shared_ptr<Course>	_currentCourse;
public:
	using Staff::Staff;
	virtual ~ProfessorBase() { }

	void	assignCourse(const std::shared_ptr<Course> &course) {
		_currentCourse = course;
	}
	void	doClass();
	void	closeCourse() { }
};

} } // namespace ft::details

using Professor = ft::pattern::factory::FactoryWrapper<ft::details::ProfessorBase>;

#endif // __EX03_PERSON_PROFESSOR_HPP__
