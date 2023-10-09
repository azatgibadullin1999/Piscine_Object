/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:27 by larlena           #+#    #+#             */
/*   Updated: 2023/10/09 13:08:11 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_PERSON_SECRETARY_HPP
# define EX01_PERSON_SECRETARY_HPP

# include "Staff.hpp"
# include "../form/CourseFinishedForm.hpp"
# include "../form/NeedCourseCreationForm.hpp"
# include "../form/NeedMoreClassRoomForm.hpp"
# include "../form/SubscriptionToCourseForm.hpp"

enum class FormType;

class Secretary : public Staff {
public:
	Secretary(const NameStoringType &name) :
	Staff(name) { }

	Secretary(NameStoringType &&name) :
	Staff(std::move(name)) { }

	IForm::pointer	createForm(FormType formType) {
		return ::createForm(formType);
	}

	void archiveForm() { }
};

#endif // EX01_PERSON_SECRETARY_HPP
