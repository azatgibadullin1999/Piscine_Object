/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:09:15 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:13:41 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_HEADMASTER_HPP__
# define __EX03_PERSON_HEADMASTER_HPP__

# include <vector>
# include <memory>
# include <string>
# include "Staff.hpp"
# include "../pattern_base_classes/Factory.hpp"

class IForm;

namespace ft { namespace details {

class HeadmasterBase : public Staff {
private:
	std::vector<std::shared_ptr<IForm>>	_formToValidate;
public:
	using Staff::Staff;
	virtual ~HeadmasterBase() { }

	void	enforceAttendance() {
		getMediator()->notify(shared_from_this(), "enforce attendance");
	}

	void	receiveForm(const std::shared_ptr<IForm> &form) {
		_formToValidate.push_back(form);
	}
};

} } // namespace ft::deatils

using Headmaster = ft::pattern::factory::FactoryWrapper<ft::details::HeadmasterBase>;

#endif // __EX03_PERSON_HEADMASTER_HPP__
