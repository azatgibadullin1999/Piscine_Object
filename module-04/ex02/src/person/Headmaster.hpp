/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:09:15 by larlena           #+#    #+#             */
/*   Updated: 2023/10/08 16:01:54 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_PERSON_HEADMASTER_HPP
# define EX01_PERSON_HEADMASTER_HPP

# include <vector>
# include <memory>
# include "Staff.hpp"

class Headmaster : public Staff {
private:
	std::vector< IForm::pointer >	_formToValidate;
public:
	Headmaster(const NameStoringType &name) :
	Staff(name) { }

	Headmaster(NameStoringType &&name) :
	Staff(std::move(name)) { }

	void	receiveForm(const IForm::pointer &form) {
		_formToValidate.push_back(form);
	}

	void	receiveForm(IForm::pointer &&form) {
		_formToValidate.push_back(std::move(form));
	}
};

#endif // EX01_PERSON_HEADMASTER_HPP
