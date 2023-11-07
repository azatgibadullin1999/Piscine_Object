/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:43:42 by larlena           #+#    #+#             */
/*   Updated: 2023/11/06 20:46:01 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NeedMoreClassRoomForm.hpp"
#include "../singletons.hpp"
#include "../room/Classroom.hpp"
#include "../person/Professor.hpp"

void	NeedMoreClassRoomForm::execute() {
	auto&&	school = SchoolSingleton::getInstance();
	auto&&	requestor = _requestor.lock();
	
	if (requestor == nullptr) {
		return ;
	}
	auto&&	roombuff = std::make_shared<Classroom>();
	school.getRooms().add(roombuff);
	requestor->setRoom(roombuff);
}