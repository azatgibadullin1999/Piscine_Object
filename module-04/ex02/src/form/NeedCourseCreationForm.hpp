/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:09 by larlena           #+#    #+#             */
/*   Updated: 2023/10/09 13:24:17 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_NEEDCOURSECREATIONFORM_HPP
# define EX01_FORM_NEEDCOURSECREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>

class NeedCourseCreationForm : public IForm {
public:
	typedef StandardFactory<NeedCourseCreationForm>	Factory;
public:
	NeedCourseCreationForm() :
	IForm(FormType::NeedCourseCreation) {
		std::cout << "Need course creation form created, Form's ID is : " << getID() << std::endl;
	}

	~NeedCourseCreationForm() { }

	void	execute() override {
		std::cout << "Need Course creation form executed, Form's ID is : " << getID() << std::endl;
	}
};

#endif // EX01_FORM_NEEDCOURSECREATIONFORM_HPP
