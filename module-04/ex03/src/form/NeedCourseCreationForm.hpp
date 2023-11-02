/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:09 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:09:16 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_FORM_NEEDCOURSECREATIONFORM_HPP__
# define __EX03_FORM_NEEDCOURSECREATIONFORM_HPP__

# include <iostream>
# include "Form.hpp"
# include "../person/PersonAliases.hpp"

class NeedCourseCreationForm final : public IForm {
private:
	std::weak_ptr<Professor>	_requestor;
	std::string			_nameOfCourse;
public:
	typedef ft::pattern::factory::StandardFactory<IForm, NeedCourseCreationForm>	Factory;
public:
	NeedCourseCreationForm() :
	IForm(FormType::NeedCourseCreation) { }

	~NeedCourseCreationForm() { }

	void	setRequestor(const std::shared_ptr<Professor> &requestor) {
		_requestor = requestor;
	}

	void	setNameOfCourse(const std::string &nameOfCourse) {
		_nameOfCourse = nameOfCourse;
	}

	void	execute() override;
};

#endif // __EX03_FORM_NEEDCOURSECREATIONFORM_HPP__
