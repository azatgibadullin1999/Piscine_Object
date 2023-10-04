/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:09:15 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 17:21:27 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_HEADMASTER_HPP
# define EX00_PERSON_HEADMASTER_HPP

# include <vector>
# include "Staff.hpp"

class Headmaster : public Staff {
private:
	std::vector<Form *>	_formToValidate;
public:
	void	receiveForm(Form *p_form);
};

#endif // EX00_PERSON_HEADMASTER_HPP
