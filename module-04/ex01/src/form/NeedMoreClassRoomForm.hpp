/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:31 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 14:49:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_NEEDMORECLASSROOMFORM_HPP
# define EX01_FORM_NEEDMORECLASSROOMFORM_HPP

# include "Form.hpp"

class NeedMoreClassRoomForm : public Form {
public:
	NeedMoreClassRoomForm() :
	Form(FormType::NeedMoreClassRoom) { }

	~NeedMoreClassRoomForm() { }

	void	execute() override { }
};

#endif // EX01_FORM_NEEDMORECLASSROOMFORM_HPP
