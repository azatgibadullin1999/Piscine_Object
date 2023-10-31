/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:09:15 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 19:16:02 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_HEADMASTER_HPP__
# define __EX03_PERSON_HEADMASTER_HPP__

# include <vector>
# include <memory>
# include <string>
# include "Staff.hpp"
# include "../pattern_base_classes/Factory.hpp"

class HeadmasterBase : public Staff {
private:
	std::vector< IForm::pointer >	_formToValidate;
public:
	using Staff::Staff;

	void	enforceAttendance() {
		getMediator()->notify(shared_from_this(), "enforce attendance");
	}

	void	receiveForm(const IForm::pointer &form) {
		_formToValidate.push_back(form);
	}
};

using Headmaster = ft::pattern::factory::FactoryWrapper<HeadmasterBase>;

#endif // __EX03_PERSON_HEADMASTER_HPP__
