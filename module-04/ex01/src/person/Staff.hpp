/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Staff.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:04:48 by larlena           #+#    #+#             */
/*   Updated: 2023/10/07 15:48:50 by larlena          ###   ########.fr       */
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

	void	sign(std::shared_ptr<Form> form) { }
};

#endif // EX01_PERSON_STAFF_HPP
