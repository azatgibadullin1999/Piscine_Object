/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:09 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:16:29 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_FORM_NEEDCOURSECREATIONFORM_HPP__
# define __EX03_FORM_NEEDCOURSECREATIONFORM_HPP__

# include <iostream>
# include "Form.hpp"
# include "../singletons.hpp"

class NeedCourseCreationForm : public IForm {
private:
	std::weak_ptr<Professor>	_requestor;
	std::string			_nameOfCourse;
public:
	typedef ft::pattern::factory::StandardFactory<IForm, NeedCourseCreationForm>	Factory;
public:
	NeedCourseCreationForm() :
	IForm(FormType::NeedCourseCreation) { }

	~NeedCourseCreationForm() { }

	void	setRequestor(const std::shared_ptr<Professor> requestor) {
		_requestor = requestor;
	}

	void	setNameOfCourse(const std::string nameOfCourse) {
		_nameOfCourse = nameOfCourse;
	}

	void	execute() override {
		auto&&	school = SchoolSingleton::getInstance();
		auto&&	course = std::make_shared<Course>(_nameOfCourse);
		auto&&	requestor = _requestor.lock();

		if (requestor == nullptr) {
			return ;
		}
		school.getCourses().add(course);
		requestor->assignCourse(course);
	}
};

#endif // __EX03_FORM_NEEDCOURSECREATIONFORM_HPP__
