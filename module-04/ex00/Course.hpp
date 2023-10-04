/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Course.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:00:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/04 15:44:06 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_COURSE_HPP
# define EX00_COURSE_HPP

# include <string>
# include <vector>

class Student;
class Professor;

class Course {
private:
	std::vector<Student *>	_students;
	std::string	_name;
	Professor	*_responsable;
	int 	_numberOfClassToGraduate;
	int	_maximumNumberOfStudent;
public:
	Course(std::string p_name);
	void	assign(Professor *p_professor);
	void	subscribe(Student *p_student);
};

#endif // EX00_COURSE_HPP
