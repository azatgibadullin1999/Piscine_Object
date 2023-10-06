/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:06:22 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 14:40:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_STUDENT_HPP
# define EX00_PERSON_STUDENT_HPP

# include <vector>
# include "Person.hpp"

class Course;
class Classroom;

class Student : public Person {
private:
	std::vector< std::shared_ptr<Course> >	_subscribedCourse;
public:
	Student(const NameStoringType &name) :
	Person(name) { }

	Student(NameStoringType &&name) :
	Person(std::move(name)) { }

	void	attendClass(Classroom *p_classroom) { }

	void	exitClass() { }

	void	graduate(Course *p_course) { }
};

#endif // EX00_PERSON_STUDENT_HPP
