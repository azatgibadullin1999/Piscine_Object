/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:09 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 12:23:22 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_FORM_NEEDCOURSECREATIONFORM_HPP
# define EX00_FORM_NEEDCOURSECREATIONFORM_HPP

# include "Form.hpp"

class NeedCourseCreationForm : public Form {
public:
	NeedCourseCreationForm() :
	Form(FormType::NeedCourseCreation) { }

	~NeedCourseCreationForm() { }

	void	execute() override { }
};

#endif // EX00_FORM_NEEDCOURSECREATIONFORM_HPP
