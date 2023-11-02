/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:20:18 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 13:44:51 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <array>
# include "Form.hpp"
# include "CourseFinishedForm.hpp"
# include "NeedCourseCreationForm.hpp"
# include "NeedMoreClassRoomForm.hpp"
# include "SubscriptionToCourseForm.hpp"

std::array<std::string_view, static_cast<std::size_t>(FormType::MAX)>	FormTypeString {
	"Course Finished",
	"Need More Class Room",
	"Need Course Creation",
	"Subscription To Course"
};

typename std::shared_ptr<IForm>	createForm(FormType type) {
	static std::array< std::shared_ptr<IForm::IFactory>, static_cast<std::size_t>(FormType::MAX) >	forms = {
		std::make_shared<CourseFinishedForm::Factory>(CourseFinishedForm::Factory()),
		std::make_shared<NeedMoreClassRoomForm::Factory>(NeedMoreClassRoomForm::Factory()),
		std::make_shared<NeedCourseCreationForm::Factory>(NeedCourseCreationForm::Factory()),
		std::make_shared<SubscriptionToCourseForm::Factory>(SubscriptionToCourseForm::Factory())
	};
	std::size_t	index = static_cast<size_t>(type);

	return forms.at(index)->create();
}
