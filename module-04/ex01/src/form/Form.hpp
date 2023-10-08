/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:48:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 14:49:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_FORM_HPP
# define EX01_FORM_FORM_HPP

# include <utility>

enum class FormType {
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse,
};

class Form {
private:
	FormType	_formType;
public:
	Form(const FormType &formType) :
	_formType(formType) { }

	Form(FormType &&formType) :
	_formType(std::move(formType)) { }

	virtual void	execute() = 0;
};

#endif // EX01_FORM_FORM_HPP
