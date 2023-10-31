/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:16:22 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:15:49 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_FORM_COURSEFINISHEDFORM_HPP__
# define __EX03_FORM_COURSEFINISHEDFORM_HPP__

# include "Form.hpp"
# include <iostream>

class CourseFinishedForm : public IForm {
public:
	typedef ft::pattern::factory::StandardFactory<IForm, CourseFinishedForm>	Factory;
public:
	CourseFinishedForm() :
	IForm(FormType::CourseFinished) { }

	~CourseFinishedForm() { }

	void	execute() override { }
};

#endif // __EX03_FORM_COURSEFINISHEDFORM_HPP__
