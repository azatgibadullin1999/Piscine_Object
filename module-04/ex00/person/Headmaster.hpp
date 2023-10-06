/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:09:15 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 14:23:34 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_HEADMASTER_HPP
# define EX00_PERSON_HEADMASTER_HPP

# include <vector>
# include <memory>
# include "Staff.hpp"

class Headmaster : public Staff {
public:
	typedef std::shared_ptr<Form>	FormStoringType;
private:
	std::vector< FormStoringType >	_formToValidate;
public:
	Headmaster(const NameStoringType &name) :
	Staff(name) { }

	Headmaster(NameStoringType &&name) :
	Staff(std::move(name)) { }

	void	receiveForm(const FormStoringType &p_form) {
		_formToValidate.push_back(p_form);
	}

	void	receiveForm(FormStoringType &&p_form) {
		_formToValidate.push_back(std::move(p_form));
	}
};

#endif // EX00_PERSON_HEADMASTER_HPP
