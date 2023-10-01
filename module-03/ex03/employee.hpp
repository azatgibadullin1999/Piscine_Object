/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:53:19 by larlena           #+#    #+#             */
/*   Updated: 2023/10/01 18:05:30 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_EMPLOYEE_HPP
# define EX03_EMPLOYEE_HPP

class IEmployee {
private:
	int	_hourlyValue;
public:
	IEmployee();
	virtual ~IEmployee();

	virtual int	executeWorkday() = 0;

	int	getHourlyValue() const {
		return _hourlyValue;
	}
} ;

class ITempWorker : public IEmployee {
public:
	ITempWorker();
	virtual ~ITempWorker();

	virtual int	registerWorkHour() = 0;
} ;

class IContractEmployee : public IEmployee {
public:
	IContractEmployee();
	virtual ~IContractEmployee();

	virtual int	registerUnworkHour() = 0;
} ;

class IApprentice : public IEmployee {
public:
	IApprentice();
	virtual ~IApprentice();

	virtual int	registerUnworkHour() = 0;
	virtual int	registerHourOfSchool() = 0;
} ;

#endif // EX03_EMPLOYEE_HPP
