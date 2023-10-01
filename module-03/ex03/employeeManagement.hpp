/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   employeeManagement.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:52:33 by larlena           #+#    #+#             */
/*   Updated: 2023/10/01 16:09:23 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_EMPLOYEE_MANAGEMENT_HPP
# define EX03_EMPLOYEE_MANAGEMENT_HPP

# include "employee.hpp"
# include <vector>
# include <algorithm>

class EmployeeManagement {
private:
	typedef IEmployee *		Value;
	typedef std::vector<Value>	Container;
private:
	Container	_employees;
public:
	EmployeeManagement() { }

	~EmployeeManagement() { }

	void	addEmployee(Value employee) {
		_employees.push_back(employee);
	}

	void	removeEmployee(Value employee) {
		_employees.erase(std::find(_employees.begin(), _employees.end(), employee));
	}

	void	executeWorkday() {
		for (Container::iterator it = _employees.begin(), ite = _employees.end(); it != ite; ++it) {
			(*it)->executeWorkday();
		}
	}
	void	calculatePayroll() { }
} ;

#endif // EX03_EMPLOYEE_MANAGEMENT_HPP