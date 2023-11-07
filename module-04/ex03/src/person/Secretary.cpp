/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:37:31 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 09:44:52 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Secretary.hpp"
// # include "../form/CourseFinishedForm.hpp"
// # include "../form/NeedCourseCreationForm.hpp"
// # include "../form/NeedMoreClassRoomForm.hpp"
// # include "../form/SubscriptionToCourseForm.hpp"

namespace ft::__details {

SecretaryBase::~SecretaryBase() { }

std::shared_ptr<IForm>	SecretaryBase::createForm(FormType formType) {
	return ::createForm(formType);
}

void SecretaryBase::archiveForm() { }

} // namespace ft::__details
