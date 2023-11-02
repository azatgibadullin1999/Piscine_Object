/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Staff.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:04:48 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:15:00 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_STAFF_HPP__
# define __EX03_PERSON_STAFF_HPP__

# include "Person.hpp"

class IForm;

class Staff : public Person {
public:
	using Person::Person;
	virtual ~Staff() { }

	void	sign(const std::shared_ptr<IForm> &form) {
	}
};

#endif // __EX03_PERSON_STAFF_HPP__
