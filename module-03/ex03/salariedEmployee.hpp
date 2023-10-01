/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salariedEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:46:12 by larlena           #+#    #+#             */
/*   Updated: 2023/09/29 11:12:43 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_SALARIED_EMPLOYEE_HPP
# define EX03_SALARIED_EMPLOYEE_HPP

# include "employee.hpp"

class ContractEmployee final : private IContractEmployee {
private:
public:
	ContractEmployee();
	~ContractEmployee();

	int	executeWorkday() { }
	int	registerUnworkHour() { }
} ;

#endif // EX03_SALARIED_EMPLOYEE_HPP