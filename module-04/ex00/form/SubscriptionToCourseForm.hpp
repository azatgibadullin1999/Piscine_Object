/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 12:23:01 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP
# define EX00_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP

# include "Form.hpp"

class SubscriptionToCourseForm : public Form {
public:
	SubscriptionToCourseForm() :
	Form(FormType::SubscriptionToCourse) { }

	~SubscriptionToCourseForm() { }

	void	execute() override { }
};

#endif // EX00_FORM_SUBSCRIPTIONTOCOURSEFORM_HPP
