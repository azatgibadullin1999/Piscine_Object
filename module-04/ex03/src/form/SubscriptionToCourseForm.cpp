/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:46:19 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 19:47:21 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SubscriptionToCourseForm.hpp"
#include "../singletons.hpp"
#include "../person/Student.hpp"

void	SubscriptionToCourseForm::execute() {
	auto&&	school = SchoolSingleton::getInstance();
	auto&&	requestor = _requestor.lock();
	
	if (requestor == nullptr) {
		return ;
	}
}