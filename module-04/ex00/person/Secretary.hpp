/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:27 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 14:40:20 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_SECRETARY_HPP
# define EX00_PERSON_SECRETARY_HPP

# include "Staff.hpp"

enum class FormType;

class Secretary : public Staff {
public:
	Secretary(const NameStoringType &name) :
	Staff(name) { }

	Secretary(NameStoringType &&name) :
	Staff(std::move(name)) { }

	std::shared_ptr<Form>	createForm(FormType formType) { }

	void archiveForm() { }
};

#endif // EX00_PERSON_SECRETARY_HPP
