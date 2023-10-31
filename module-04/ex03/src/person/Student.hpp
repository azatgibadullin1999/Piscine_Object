/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:06:22 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 17:28:56 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_STUDENT_HPP__
# define __EX03_PERSON_STUDENT_HPP__

# include <vector>

class Course;
class Classroom;
class Person;

class StudentBase;
using Student = ft::pattern::factory::FactoryWrapper<StudentBase>;

class StudentBase : public Person {
private:
	std::vector< std::shared_ptr<Course> >	_subscribedCourses;
public:
	using Person::Person;

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

#endif // __EX03_PERSON_STUDENT_HPP__
