/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:16:22 by larlena           #+#    #+#             */
/*   Updated: 2023/11/06 19:31:33 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_FORM_COURSEFINISHEDFORM_HPP__
# define __EX03_FORM_COURSEFINISHEDFORM_HPP__

# include <memory>
# include "Form.hpp"
# include "../person/PersonAliases.hpp"

class CourseFinishedForm final : public IForm {
public:
	typedef ft::pattern::factory::StandardFactory<IForm, CourseFinishedForm>	Factory;
private:
	std::shared_ptr<Student>	_graduater;
	std::shared_ptr<Professor>	_requestor;
public:
	CourseFinishedForm() :
	IForm(FormType::CourseFinished) { }
	~CourseFinishedForm() { }

	void	setRequestor(const std::shared_ptr<Professor> &requestor) {
		_requestor = requestor;
	}

	void	setGraduater(const std::shared_ptr<Student> &graduater) {
		_graduater = graduater;
	}

	void	execute() override;
};

#endif // __EX03_FORM_COURSEFINISHEDFORM_HPP__
