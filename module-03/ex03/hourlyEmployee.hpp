/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hourlyEmployee.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:51:29 by larlena           #+#    #+#             */
/*   Updated: 2023/09/29 11:25:58 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EX03_HOURLY_EMPLOYEE_HPP
# define EX03_HOURLY_EMPLOYEE_HPP

# include "employee.hpp"

class TempWorker final : private ITempWorker {
private:
public:
	TempWorker();
	~TempWorker();

	int	executeWorkday() { }
	int	registerWorkHour() { }
} ;

class Apprentice final : private IApprentice {
private:
public:
	Apprentice();
	~Apprentice();

	int	executeWorkday() { }
	int	registerUnworkHour() { }
} ;


#endif // EX03_HOURLY_EMPLOYEE_HPP