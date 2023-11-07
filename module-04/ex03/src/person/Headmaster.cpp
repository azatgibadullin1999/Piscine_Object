/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:48:38 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 09:49:35 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headmaster.hpp"

namespace ft::__details {

HeadmasterBase::~HeadmasterBase() { }

void	HeadmasterBase::enforceAttendance() {
	getMediator()->notify(this->shared_from_this(), "enforce attendance");
}

void	HeadmasterBase::receiveForm(const std::shared_ptr<IForm> &form) {
	_formToValidate.push_back(form);
}

} // namespace ft::__details
