/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MediatorOfPerson.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:54:32 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 16:53:28 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_MEDIATOROFPERSON_HPP__
# define __EX03_PERSON_MEDIATOROFPERSON_HPP__

# include "../pattern_base_classes/Mediator.hpp"
# include "../pattern_base_classes/Factory.hpp"
# include "Headmaster.hpp"
# include "Professor.hpp"
# include "Secretary.hpp"
# include "Student.hpp"

namespace ft { namespace details {

class MediatorOfPersonBase : public ft::pattern::mediator::IMediator<Person> {
private:
	std::shared_ptr<Headmaster>	_headmaster;
	std::shared_ptr<Secretary>	_secretary;
	std::shared_ptr<Professor>	_professor;
	std::shared_ptr<Student>	_student;
public:
	MediatorOfPersonBase() { }

	MediatorOfPersonBase(const std::shared_ptr<Headmaster> &headmaster,
		const std::shared_ptr<Secretary> &secretary,
		const std::shared_ptr<Professor> &professor,
		const std::shared_ptr<Student> &student) noexcept :
		_headmaster(headmaster),
		_secretary(secretary),
		_professor(professor),
		_student(student) {
			_headmaster->setMediator(shared_from_this());
			_secretary->setMediator(shared_from_this());
			_professor->setMediator(shared_from_this());
			_student->setMediator(shared_from_this());
		}

	void	setHeadmaster(const std::shared_ptr<Headmaster> &headmaster) {
		_headmaster = headmaster;
		_headmaster->setMediator(shared_from_this());
	}
	void	setSecretary(const std::shared_ptr<Secretary> &secretary) {
		_secretary = secretary;
		_secretary->setMediator(shared_from_this());
	}
	void	setProfessor(const std::shared_ptr<Professor> &professor) {
		_professor = professor;	
		_professor->setMediator(shared_from_this());
	}
	void	setStudent(const std::shared_ptr<Student> &student) {
		_student = student;
		_student->setMediator(shared_from_this());
	}

	void	notify(std::shared_ptr<Person> person, const std::string &event) override;
private:
	void	notifyFromHeadmaster(const std::string &event);
	void	notifyFromSecretary(const std::string &event);
	void	notifyFromProfessor(const std::string &event);
	void	notifyFromStudent(const std::string &event);
};

} } // namespace ft::details

using MediatorOfPerson = typename ft::pattern::factory::FactoryWrapper<ft::details::MediatorOfPersonBase>;

#endif // __EX03_PERSON_MEDIATOROFPERSON_HPP__