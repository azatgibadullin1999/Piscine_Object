/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:16:22 by larlena           #+#    #+#             */
/*   Updated: 2023/10/09 13:24:21 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_COURSEFINISHEDFORM_HPP
# define EX01_FORM_COURSEFINISHEDFORM_HPP

# include "Form.hpp"
# include <iostream>

class CourseFinishedForm : public IForm {
public:
	typedef StandardFactory<CourseFinishedForm>	Factory;
public:
	CourseFinishedForm() :
	IForm(FormType::CourseFinished) {
		std::cout << "Course finished form created, Form's ID is : " << getID() << std::endl;
	}

	~CourseFinishedForm() { }

	void	execute() override {
		std::cout << "Course finished form executed, Form's ID is : " << getID() << std::endl;
	}
};

#endif // EX01_FORM_COURSEFINISHEDFORM_HPP
