/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:06:22 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 09:45:29 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_STUDENT_HPP__
# define __EX03_PERSON_STUDENT_HPP__

# include "Person.hpp"
# include "../pattern_base_classes/Observer.hpp"
# include "../pattern_base_classes/Factory.hpp"

class Course;
class Classroom;
class Person;

namespace ft::__details {

class HeadmasterBase;

class StudentBase : public Person {
private:
	std::vector< std::shared_ptr<Course> >	_subscribedCourses;
public:
	using Person::Person;
	virtual ~StudentBase();
	void	setCourse(std::shared_ptr<Course> course);
	void	attendClass(std::shared_ptr<Classroom> classroom);
	void	exitClass();
	void	graduate(std::shared_ptr<Course> course);
};

} // namespace ft::__details

using Student = ft::pattern::factory::FactoryWrapper<ft::__details::StudentBase>;

#endif // __EX03_PERSON_STUDENT_HPP__
