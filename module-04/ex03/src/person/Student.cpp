/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:10:43 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 09:45:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

namespace ft::__details {

StudentBase::~StudentBase() { }

void	StudentBase::setCourse(std::shared_ptr<Course> course) {
	_subscribedCourses.push_back(course);
}

void	StudentBase::attendClass(std::shared_ptr<Classroom> classroom) {
	if (_subscribedCourses.size() == 0) {
		getMediator()->notify(shared_from_this(), "have no course");
	}
}

void	StudentBase::exitClass() { }

void	StudentBase::graduate(std::shared_ptr<Course> course) { }

} // namespace ft::__details