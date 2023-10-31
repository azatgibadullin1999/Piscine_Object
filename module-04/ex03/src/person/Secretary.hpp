/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:27 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 17:29:03 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_SECRETARY_HPP__
# define __EX03_PERSON_SECRETARY_HPP__

// # include "Staff.hpp"
# include "../form/CourseFinishedForm.hpp"
# include "../form/NeedCourseCreationForm.hpp"
# include "../form/NeedMoreClassRoomForm.hpp"
# include "../form/SubscriptionToCourseForm.hpp"

enum class FormType;
class Staff;

class SecretaryBase;
using Secretary = ft::pattern::factory::FactoryWrapper<SecretaryBase>;

class SecretaryBase : public Staff {
public:
	using Staff::Staff;

	IForm::pointer	createForm(FormType formType) {
		return ::createForm(formType);
	}

	void archiveForm() { }
};

#endif // __EX03_PERSON_SECRETARY_HPP__
