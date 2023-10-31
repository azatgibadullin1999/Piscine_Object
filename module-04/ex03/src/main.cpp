/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:16:59 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 17:31:28 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory>
#include <iostream>
#include "singletons.hpp"
#include "person/Secretary.hpp"
#include "person/Headmaster.hpp"
#include "person/MediatorOfPerson.hpp"

int	main() {
	auto&&	schoolSingletonInstance = SchoolSingleton::getInstance();
	auto&&	buffStuffs = schoolSingletonInstance.getStaffs();
	auto&&	mediator = std::make_shared<MediatorOfPerson>();


	buffStuffs.add(Headmaster::create());
	mediator->setHeadmaster(std::dynamic_pointer_cast<Headmaster>(buffStuffs.retrieve(buffStuffs.size() - 1)));
	buffStuffs.retrieve(buffStuffs.size() - 1)->setMediator(mediator);

	buffStuffs.add(Professor::create());
	mediator->setProfessor(std::dynamic_pointer_cast<Professor>(buffStuffs.retrieve(buffStuffs.size() - 1)));
	buffStuffs.retrieve(buffStuffs.size() - 1)->setMediator(mediator);

	buffStuffs.add(Secretary::create());
	mediator->setSecretary(std::dynamic_pointer_cast<Secretary>(buffStuffs.retrieve(buffStuffs.size() - 1)));
	buffStuffs.retrieve(buffStuffs.size() - 1)->setMediator(mediator);

	auto&&	buffStudents = schoolSingletonInstance.getStudents();
	buffStudents.add(Student::create());
	mediator->setStudent(buffStudents.retrieve(buffStudents.size() - 1));
	buffStudents.retrieve(buffStudents.size() - 1)->setMediator(mediator);

	SchoolSingleton::getInstance().getCourses().add(std::make_shared<Course>());
	SchoolSingleton::getInstance().getRooms().add(std::make_shared<Room>());

	SchoolSingleton::getInstance().getCourses().retrieve(0);
	SchoolSingleton::getInstance().getStaffs().retrieve(0);
	SchoolSingleton::getInstance().getStudents().retrieve(0);
	SchoolSingleton::getInstance().getRooms().retrieve(0);

	auto&&	courses = SchoolSingleton::getInstance().getCourses();
	for (auto&& it = courses.begin(), ite = courses.end(); it != ite; ++it) {
		std::cout << "courses" << std::endl;
	}

	auto&&	staffs = SchoolSingleton::getInstance().getStaffs();
	for (auto&& it = staffs.begin(), ite = staffs.end(); it != ite; ++it) {
		std::cout << "staffs" << std::endl;
	}

	auto&&	students = SchoolSingleton::getInstance().getStudents();
	for (auto&& it = students.begin(), ite = students.end(); it != ite; ++it) {
		std::cout << "students" << std::endl;
	}

	auto&&	rooms = SchoolSingleton::getInstance().getRooms();
	for (auto&& it = rooms.begin(), ite = rooms.end(); it != ite; ++it) {
		std::cout << "rooms" << std::endl;
	}
//	TEST EX02
	auto&&	secretary = Secretary();
	auto&&	headmaster = Headmaster();
	IForm::pointer	buff;

	for (std::size_t i = 0; i < 20; ++i) {
		buff = secretary.createForm(static_cast<FormType>(std::rand() % 4));
		if (std::rand() % 2) {
			headmaster.receiveForm(std::move(buff));
		} else {
			headmaster.sign(std::move(buff));
		}
	}
//	TEST EX03

	// mediator->notify(, "EBASHIM");
	// std::dynamic_pointer_cast<Headmaster>()
	// schoolSingletonInstance.getStaffs().retrieve(0)->;

	return 0;
}
