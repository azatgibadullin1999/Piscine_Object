/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MediatorOfPerson.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:54:32 by larlena           #+#    #+#             */
/*   Updated: 2023/11/02 15:56:27 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_MEDIATOROFPERSON_HPP__
# define __EX03_PERSON_MEDIATOROFPERSON_HPP__

# include <memory>
# include "../pattern_base_classes/Mediator.hpp"
# include "../pattern_base_classes/Factory.hpp"
# include "Headmaster.hpp"
# include "Professor.hpp"
# include "Secretary.hpp"
# include "Student.hpp"
# include "Person.hpp"

namespace ft { namespace details {

class MediatorOfPersonBase : public ft::pattern::mediator::IMediator<Person> {
private:
	std::shared_ptr<Headmaster>	_headmaster;
	std::shared_ptr<Secretary>	_secretary;
	std::shared_ptr<Professor>	_professor;
	std::shared_ptr<Student>	_student;
protected:
	MediatorOfPersonBase() noexcept { }
public:
	virtual ~MediatorOfPersonBase() { }

	void	setPersons(const std::shared_ptr<Headmaster> &headmaster,
			const std::shared_ptr<Secretary> &secretary,
			const std::shared_ptr<Professor> &professor,
			const std::shared_ptr<Student> &student) {
		_headmaster = headmaster;
		_secretary = secretary;
		_professor = professor;
		_student = student;
		setMediators(_headmaster, _secretary, _professor, _student);
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