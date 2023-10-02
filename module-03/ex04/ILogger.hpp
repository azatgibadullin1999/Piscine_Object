/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ILogger.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:57:37 by larlena           #+#    #+#             */
/*   Updated: 2023/10/02 15:51:06 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_ILOGGER_HPP
# define EX04_ILOGGER_HPP

# include <string>

class ILogger {
public:
	ILogger() { }
	virtual ~ILogger() { }
	virtual void	write(std::string str) = 0;

	class IFactory {
	public:
		IFactory() { }
		virtual ~IFactory() { }
		virtual ILogger	*create() = 0;
	} ;
} ;

class ILoggerWithHeader : public ILogger {
private:
	const std::string	_header;
protected:
	const std::string	&getHeader() const {
		return _header;
	}
public:
	ILoggerWithHeader(const std::string &header) :
	_header(header) { }

	~ILoggerWithHeader() { }

} ;

#endif // EX04_ILOGGER_HPP