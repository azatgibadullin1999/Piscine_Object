/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:31 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 12:23:08 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_FORM_NEEDMORECLASSROOMFORM_HPP
# define EX00_FORM_NEEDMORECLASSROOMFORM_HPP

# include "Form.hpp"

class NeedMoreClassRoomForm : public Form {
public:
	NeedMoreClassRoomForm() :
	Form(FormType::NeedMoreClassRoom) { }

	~NeedMoreClassRoomForm() { }

	void	execute() override { }
};

#endif // EX00_FORM_NEEDMORECLASSROOMFORM_HPP
