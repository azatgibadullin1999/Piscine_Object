/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:16:22 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 12:23:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_FORM_COURSEFINISHEDFORM_HPP
# define EX00_FORM_COURSEFINISHEDFORM_HPP

# include "Form.hpp"

class CourseFinishedForm : public Form {
public:
	CourseFinishedForm() :
	Form(FormType::CourseFinished) { }

	~CourseFinishedForm() { }

	void	execute() override { }
};

#endif // EX00_FORM_COURSEFINISHEDFORM_HPP
