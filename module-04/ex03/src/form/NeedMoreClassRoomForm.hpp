/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:31 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:09:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_FORM_NEEDMORECLASSROOMFORM_HPP__
# define __EX03_FORM_NEEDMORECLASSROOMFORM_HPP__

# include <iostream>
# include "Form.hpp"
# include "../person/PersonAliases.hpp"

class NeedMoreClassRoomForm final : public IForm {
private:
	std::weak_ptr<Professor>	_requestor;
public:
	typedef ft::pattern::factory::StandardFactory<IForm, NeedMoreClassRoomForm>	Factory;
public:
	NeedMoreClassRoomForm() :
	IForm(FormType::NeedMoreClassRoom) { }

	void	setRequestor(std::shared_ptr<Professor> requestor) {
		_requestor = requestor;
	}

	~NeedMoreClassRoomForm() { }

	void	execute() override;
};

#endif // __EX03_FORM_NEEDMORECLASSROOMFORM_HPP__
