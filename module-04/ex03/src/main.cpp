/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:16:59 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:16:17 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory>
#include <iostream>
#include "singletons.hpp"
#include "person/Secretary.hpp"
#include "person/Headmaster.hpp"
#include "person/MediatorOfPerson.hpp"
#include "form/CourseFinishedForm.hpp"
int	main() {
	auto&&	schoolSingletonInstance = SchoolSingleton::getInstance();
	auto&&	buffStuffs = schoolSingletonInstance.getStaffs();

	auto&&	headmasterbuff = Headmaster::create("Headmaster");
	auto&&	professorbuff = Professor::create("Professor");
	auto&&	secretarybuff = Secretary::create("Secretary");
	auto&&	studentbuff = Student::create("Student");


	// headmasterbuff->attach(professorbuff);
	// headmasterbuff->attach(studentbuff);

	// headmasterbuff->notify();

	auto&&	mediator = MediatorOfPerson::create();
	mediator->setPersons(headmasterbuff, secretarybuff, professorbuff, studentbuff);

	auto&&	staffs = schoolSingletonInstance.getStaffs();
	auto&&	students = schoolSingletonInstance.getStudents();
	staffs.add(headmasterbuff);
	staffs.retrieve(staffs.size() - 1);
	staffs.add(professorbuff);
	staffs.retrieve(staffs.size() - 1);
	staffs.add(secretarybuff);
	staffs.retrieve(staffs.size() - 1);
	students.add(studentbuff);
	students.retrieve(students.size() - 1);

	// SchoolSingleton::getInstance().getCourses().add(std::make_shared<Course>());
	SchoolSingleton::getInstance().getRooms().add(std::make_shared<Room>());

	SchoolSingleton::getInstance().getCourses().retrieve(0);
	SchoolSingleton::getInstance().getStaffs().retrieve(0);
	SchoolSingleton::getInstance().getStudents().retrieve(0);
	SchoolSingleton::getInstance().getRooms().retrieve(0);

	for (auto&& it : SchoolSingleton::getInstance().getCourses() ) {
		std::cout << "courses" << std::endl;
	}

	for (auto&& it : SchoolSingleton::getInstance().getStaffs()) {
		std::cout << "staffs" << std::endl;
	}

	for (auto&& it : SchoolSingleton::getInstance().getStudents()) {
		std::cout << "students" << std::endl;
	}

	for (auto&& it : SchoolSingleton::getInstance().getRooms()) {
		std::cout << "rooms" << std::endl;
	}

//	TEST EX02
	// auto&&	secretary = Secretary();
	// auto&&	headmaster = Headmaster();
	// IForm::pointer	buff;

	// for (std::size_t i = 0; i < 20; ++i) {
	// 	buff = secretary.createForm(static_cast<FormType>(std::rand() % 4));
	// 	if (std::rand() % 2) {
	// 		headmaster.receiveForm(std::move(buff));
	// 	} else {
	// 		headmaster.sign(std::move(buff));
	// 	}
	// }
//	TEST EX03

	// mediator->notify(, "EBASHIM");
	// std::dynamic_pointer_cast<Headmaster>()
	// schoolSingletonInstance.getStaffs().retrieve(0)->;

	return 0;
}
