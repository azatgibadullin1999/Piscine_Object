/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:04 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:06:08 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_PROFESSOR_HPP__
# define __EX03_PERSON_PROFESSOR_HPP__

# include "Staff.hpp"
# include "../pattern_base_classes/Factory.hpp"

class Course;
class ProfessorBase;

namespace ft::__details {

class HeadmasterBase;

class ProfessorBase : public Staff {
private:
	std::shared_ptr<Course>	_currentCourse;
public:
	using Staff::Staff;
	virtual ~ProfessorBase();
	void	assignCourse(const std::shared_ptr<Course> &course);
	void	doClass();
	void	closeCourse();
};

} // namespace ft::__details

using Professor = ft::pattern::factory::FactoryWrapper<ft::__details::ProfessorBase>;

#endif // __EX03_PERSON_PROFESSOR_HPP__
