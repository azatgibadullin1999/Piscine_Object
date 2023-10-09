/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Staff.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:04:48 by larlena           #+#    #+#             */
/*   Updated: 2023/10/09 13:08:03 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_PERSON_STAFF_HPP
# define EX01_PERSON_STAFF_HPP

# include "Person.hpp"
# include "../form/Form.hpp"

class Staff : public Person {
public:
	Staff(const NameStoringType &name) :
	Person(name) { }

	Staff(NameStoringType &&name) :
	Person(std::move(name)) { }

	void	sign(const IForm::pointer &form) {
		form->execute();
	}
};

#endif // EX01_PERSON_STAFF_HPP
