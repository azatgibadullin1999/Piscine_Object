/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:20:18 by larlena           #+#    #+#             */
/*   Updated: 2023/10/09 13:22:28 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "CourseFinishedForm.hpp"
# include "Form.hpp"
# include "NeedCourseCreationForm.hpp"
# include "NeedMoreClassRoomForm.hpp"
# include "SubscriptionToCourseForm.hpp"
# include <vector>

typename IForm::pointer	createForm(FormType type) {
	static std::vector< std::shared_ptr<IForm::IFactory> >	forms = {
		std::make_shared<CourseFinishedForm::Factory>(CourseFinishedForm::Factory()),
		std::make_shared<NeedMoreClassRoomForm::Factory>(NeedMoreClassRoomForm::Factory()),
		std::make_shared<NeedCourseCreationForm::Factory>(NeedCourseCreationForm::Factory()),
		std::make_shared<SubscriptionToCourseForm::Factory>(SubscriptionToCourseForm::Factory())
	};
	std::size_t	index = static_cast<size_t>(type);

	return forms.at(index)->create();
}
