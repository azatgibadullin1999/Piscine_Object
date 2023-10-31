/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Staff.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:04:48 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 19:16:44 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_STAFF_HPP__
# define __EX03_PERSON_STAFF_HPP__

// # include "Person.hpp"
# include "../form/Form.hpp"

class Person;

class Staff : public Person {
public:
	using Person::Person;

	void	sign(const IForm::pointer &form) {
	}
};

#endif // __EX03_PERSON_STAFF_HPP__
