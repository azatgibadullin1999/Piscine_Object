/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:06:22 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:15:18 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_STUDENT_HPP__
# define __EX03_PERSON_STUDENT_HPP__

# include <vector>
# include "Person.hpp"
# include "../pattern_base_classes/Factory.hpp"

class Course;
class Classroom;
class Person;

namespace ft { namespace details {

class StudentBase : public Person {
private:
	std::vector< std::shared_ptr<Course> >	_subscribedCourses;
public:
	using Person::Person;
	virtual ~StudentBase() { }

	void	setCourse(std::shared_ptr<Course> course) {
		_subscribedCourses.push_back(course);
	}

	void	attendClass(std::shared_ptr<Classroom> classroom) {
		if (_subscribedCourses.size() == 0) {
			getMediator()->notify(shared_from_this(), "have no course");
		}
	}

	void	exitClass() { }

	void	graduate(std::shared_ptr<Course> course) { }
};

} } // namespace ft::details

using Student = ft::pattern::factory::FactoryWrapper<ft::details::StudentBase>;

#endif // __EX03_PERSON_STUDENT_HPP__
