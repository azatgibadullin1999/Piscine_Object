/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/09 13:24:09 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP
# define EX01_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP

# include "Form.hpp"
# include <iostream>

class SubscriptionToCourseForm : public IForm {
public:
	typedef StandardFactory<SubscriptionToCourseForm>	Factory;
public:
	SubscriptionToCourseForm() :
	IForm(FormType::SubscriptionToCourse) {
		std::cout << "Subscription to course form created, Form's ID is : " << getID() << std::endl;
	}

	~SubscriptionToCourseForm() { }

	void	execute() override {
		std::cout << "Subscription to course form executed, Form's ID is : " << getID() << std::endl;
	}
};

#endif // EX01_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP
