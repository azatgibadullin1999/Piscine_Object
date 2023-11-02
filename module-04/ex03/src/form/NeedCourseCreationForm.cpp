/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:40:44 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 19:43:19 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NeedCourseCreationForm.hpp"
#include "../singletons.hpp"
#include "../Course.hpp"
#include "../person/Professor.hpp"

void	NeedCourseCreationForm::execute() {
	auto&&	school = SchoolSingleton::getInstance();
	auto&&	course = std::make_shared<Course>(_nameOfCourse);
	auto&&	requestor = _requestor.lock();
	
	if (requestor == nullptr) {
		return ;
	}
	school.getCourses().add(course);
	requestor->assignCourse(course);
}