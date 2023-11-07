/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:27 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 09:45:07 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_SECRETARY_HPP__
# define __EX03_PERSON_SECRETARY_HPP__

# include "Staff.hpp"
# include "../pattern_base_classes/Factory.hpp"

class IForm;
enum class FormType;
std::shared_ptr<IForm>	createForm(FormType formType);

namespace ft::__details {

class SecretaryBase : public Staff {
public:
	using Staff::Staff;
	virtual ~SecretaryBase();
	std::shared_ptr<IForm>	createForm(FormType formType);
	void archiveForm();
};

} // namespace ft::__details

using Secretary = ft::pattern::factory::FactoryWrapper<ft::__details::SecretaryBase>;

#endif // __EX03_PERSON_SECRETARY_HPP__
