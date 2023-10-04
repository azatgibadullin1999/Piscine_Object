/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Staff.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:04:48 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 17:21:01 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_STAFF_HPP
# define EX00_PERSON_STAFF_HPP

# include "Person.hpp"

class Form;

class Staff : public Person {
public:
	void	sign(Form *p_form);
};

#endif // EX00_PERSON_STAFF_HPP
