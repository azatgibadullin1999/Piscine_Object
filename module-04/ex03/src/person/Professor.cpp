/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:05:32 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:06:55 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Professor.hpp"

namespace ft::__details {

ProfessorBase::~ProfessorBase() { }

void	ProfessorBase::assignCourse(const std::shared_ptr<Course> &course) {
	_currentCourse = course;
}

void	ProfessorBase::doClass() { }

void	ProfessorBase::closeCourse() { }

} // ft::__details
