/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:16:59 by larlena           #+#    #+#             */
/*   Updated: 2023/10/08 11:50:32 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory>
#include <iostream>
#include "singletons.hpp"

int	main() {
	SchoolSingleton::getInstance().getCourses().add(std::make_shared<SchoolSingleton::Course>(SchoolSingleton::Course("Sperma")));
	SchoolSingleton::getInstance().getStaffs().add(std::make_shared<SchoolSingleton::Staff>(SchoolSingleton::Staff("Sperma")));
	SchoolSingleton::getInstance().getStudents().add(std::make_shared<SchoolSingleton::Student>(SchoolSingleton::Student("Sperma")));
	SchoolSingleton::getInstance().getRooms().add(std::make_shared<SchoolSingleton::Room>(SchoolSingleton::Room()));


	SchoolSingleton::getInstance().getCourses().retrieve(0);
	SchoolSingleton::getInstance().getStaffs().retrieve(0);
	SchoolSingleton::getInstance().getStudents().retrieve(0);
	SchoolSingleton::getInstance().getRooms().retrieve(0);

	auto	&courses = SchoolSingleton::getInstance().getCourses();
	for (auto it = courses.begin(), ite = courses.end(); it != ite; ++it) {
		std::cout << "courses" << std::endl;
	}

	auto	&staffs = SchoolSingleton::getInstance().getStaffs();
	for (auto it = staffs.begin(), ite = staffs.end(); it != ite; ++it) {
		std::cout << "staffs" << std::endl;
	}

	auto	&students = SchoolSingleton::getInstance().getStudents();
	for (auto it = students.begin(), ite = students.end(); it != ite; ++it) {
		std::cout << "students" << std::endl;
	}

	auto	&rooms = SchoolSingleton::getInstance().getRooms();
	for (auto it = rooms.begin(), ite = rooms.end(); it != ite; ++it) {
		std::cout << "rooms" << std::endl;
	}
	return 0;
}
