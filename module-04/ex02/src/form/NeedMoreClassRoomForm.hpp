/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:31 by larlena           #+#    #+#             */
/*   Updated: 2023/10/09 13:24:13 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_NEEDMORECLASSROOMFORM_HPP
# define EX01_FORM_NEEDMORECLASSROOMFORM_HPP

# include "Form.hpp"
# include <iostream>

class NeedMoreClassRoomForm : public IForm {
public:
	typedef StandardFactory<NeedMoreClassRoomForm>	Factory;
public:
	NeedMoreClassRoomForm() :
	IForm(FormType::NeedMoreClassRoom) {
		std::cout << "Need more class room form created, Form's ID is : " << getID() << std::endl;
	}

	~NeedMoreClassRoomForm() { }

	void	execute() override {
		std::cout << "Need more class room form executed, Form's ID is : " << getID() << std::endl;
	}
};

#endif // EX01_FORM_NEEDMORECLASSROOMFORM_HPP
