/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:27 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 17:21:13 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_SECRETARY_HPP
# define EX00_PERSON_SECRETARY_HPP

# include "Staff.hpp"

enum class FormType;

class Secretary : public Staff {
public:
	Form *createForm(FormType p_formType);
	void archiveForm();
};

#endif // EX00_PERSON_SECRETARY_HPP
