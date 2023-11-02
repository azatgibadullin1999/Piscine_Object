/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Course.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:00:50 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:04:10 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_COURSE_HPP__
# define __EX03_COURSE_HPP__

# include <string>
# include <vector>
# include <memory>
# include "person/Professor.hpp"
# include "person/Student.hpp"

class Course {
private:
	std::vector< std::shared_ptr<Student> >	_students;
	std::shared_ptr<Professor>		_responsable;
	std::string				_name;
	int 					_numberOfClassToGraduate;
	int					_maximumNumberOfStudent;
public:
	Course(const std::string &name) :
	_name(name) { }

	Course(std::string &&name) :
	_name(std::move(name)) { }

	~Course() { }

	void	assign(const std::shared_ptr<Professor> &professor) { }

	void	subscribe(const std::shared_ptr<Student> &student) { }

};

#endif // __EX03_COURSE_HPP__
