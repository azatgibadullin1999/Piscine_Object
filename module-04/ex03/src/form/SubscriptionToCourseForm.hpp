/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:17:13 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP__
# define __EX03_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP__

# include "Form.hpp"
# include <iostream>

class SubscriptionToCourseForm : public IForm {
private:
	std::weak_ptr<Student>	_requestor;
public:
	typedef ft::pattern::factory::StandardFactory<IForm, SubscriptionToCourseForm>	Factory;
public:

	SubscriptionToCourseForm() :
	IForm(FormType::SubscriptionToCourse) { }

	~SubscriptionToCourseForm() { }

	void	setRequestor(std::shared_ptr<Student> requestor) {
		_requestor = requestor;
	}

	void	execute() override {
		auto&&	school = SchoolSingleton::getInstance();
		auto&&	requestor = _requestor.lock();

		if (requestor == nullptr) {
			return ;
		}
	}
};

#endif // __EX03_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP__
