/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MediatorOfPerson.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:13:52 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:32:32 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MediatorOfPerson.hpp"
#include "Headmaster.hpp"
#include "Professor.hpp"
#include "Secretary.hpp"
#include "Student.hpp"
#include "Person.hpp"
#include "../form/Form.hpp"

namespace ft::__details {

MediatorOfPersonBase::MediatorOfPersonBase() noexcept { }

MediatorOfPersonBase::~MediatorOfPersonBase() { }

std::shared_ptr<MediatorOfPersonBase::IMediator>	MediatorOfPersonBase::getThis() {
	return std::dynamic_pointer_cast<IMediator>(shared_from_this());
}

void	MediatorOfPersonBase::setPersons(const std::shared_ptr<Headmaster> &headmaster,
		const std::shared_ptr<Secretary> &secretary,
		const std::shared_ptr<Professor> &professor,
		const std::shared_ptr<Student> &student) {
	_headmaster = headmaster;
	_secretary = secretary;
	_professor = professor;
	_student = student;
	setMediators(_headmaster, _secretary, _professor, _student);
}

void	MediatorOfPersonBase::notifyFromHeadmaster(const std::string &event) { }

void	MediatorOfPersonBase::notifyFromSecretary(const std::string &event) { }

void	MediatorOfPersonBase::notifyFromProfessor(const std::string &event) {
	std::shared_ptr<IForm>	form;

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

} // namespace ft::details
