/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:06:22 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 17:20:58 by larlena          ###   ########.fr       */
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
	std::vector<Course *>	_subscribedCourse;
public:
	void	attendClass(Classroom *p_classroom);
	void	exitClass();
	void	graduate(Course *p_course);
};

#endif // EX00_PERSON_STUDENT_HPP
