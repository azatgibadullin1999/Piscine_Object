/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:48:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 15:31:48 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_FORM_FORM_HPP
# define EX00_FORM_FORM_HPP

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
	Form(FormType p_formType) { }

	virtual void	execute() = 0;
};

#endif // EX00_FORM_FORM_HPP
