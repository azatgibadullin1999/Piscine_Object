/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:09:15 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 09:51:53 by larlena          ###   ########.fr       */
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

namespace ft::__details {

class HeadmasterBase : public Staff {
private:
	std::vector<std::shared_ptr<IForm>>	_formToValidate;
public:
	using Staff::Staff;
	virtual ~HeadmasterBase();
	void	enforceAttendance();
	void	receiveForm(const std::shared_ptr<IForm> &form);
};

} // namespace ft::__deatils

using Headmaster = ft::pattern::factory::FactoryWrapper<ft::__details::HeadmasterBase>;

#endif // __EX03_PERSON_HEADMASTER_HPP__
