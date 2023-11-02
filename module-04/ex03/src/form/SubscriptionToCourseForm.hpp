/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:50 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 00:55:33 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP__
# define __EX03_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP__

# include <iostream>
# include "Form.hpp"
# include "../person/PersonAliases.hpp"

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

	void	execute() override;
};

#endif // __EX03_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP__
