/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MediatorOfPerson.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:13:52 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:33:26 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MediatorOfPerson.hpp"

namespace ft { namespace details {

void	MediatorOfPersonBase::notifyFromHeadmaster(const std::string &event) { }

void	MediatorOfPersonBase::notifyFromSecretary(const std::string &event) { }

void	MediatorOfPersonBase::notifyFromProfessor(const std::string &event) {
	IForm::pointer	form;

	if (event == "have no courses") {
		form = _secretary->createForm(FormType::NeedCourseCreation);
	}
	if (event == "have no room") {
		form = _secretary->createForm(FormType::NeedMoreClassRoom);
	}
	_headmaster->receiveForm(form);
	_professor->sign(form);
	_headmaster->sign(form);
}

void	MediatorOfPersonBase::notifyFromStudent(const std::string &event) { }

void	MediatorOfPersonBase::notify(std::shared_ptr<Person> person, const std::string &event) {
	if (_headmaster == person) {
		notifyFromHeadmaster(event);
	} else if (_secretary == person) {
		notifyFromSecretary(event);
	} else if (_professor == person) {
		notifyFromProfessor(event);
	} else if (_student == person) {
		notifyFromStudent(event);
	}
	return ;
}

} } // namespace ft::details
