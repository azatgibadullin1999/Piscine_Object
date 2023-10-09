/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Course.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:00:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/07 15:29:52 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_COURSE_HPP
# define EX01_COURSE_HPP

# include <string>
# include <vector>
# include <memory>

class Student;
class Professor;

class Course {
public:
	typedef std::shared_ptr<Professor>	ProfessorStoringType;
	typedef std::shared_ptr<Student>	StudentStoringType; 
	typedef std::string			NameStoringType;
private:
	std::vector< StudentStoringType >	_students;
	ProfessorStoringType	_responsable;
	NameStoringType		_name;
	int 	_numberOfClassToGraduate;
	int	_maximumNumberOfStudent;
public:
	Course(const NameStoringType &name) :
	_name(name) { }

	Course(NameStoringType &&name) :
	_name(std::move(name)) { }

	void	assign(const ProfessorStoringType &professor) { }

	void	subscribe(const StudentStoringType &student) { }

};

#endif // EX01_COURSE_HPP
