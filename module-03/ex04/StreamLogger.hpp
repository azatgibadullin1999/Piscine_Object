/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamLogger.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:05:20 by larlena           #+#    #+#             */
/*   Updated: 2023/10/02 15:51:28 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_STREAMLOGGER_HPP
# define EX04_STREAMLOGGER_HPP

# include <ostream>
# include <iostream>
# include "ILogger.hpp"

class StreamLogger : public ILoggerWithHeader {
private:
	std::ostream	_out;
public:
	StreamLogger(const std::ostream &ostream, const std::string &header) :
	ILoggerWithHeader(header),
	_out(ostream.rdbuf()) { }

	~StreamLogger() { }

	void	write(std::string str) {
		_out << getHeader() << '\n' << str << '\n';
	}

public:
	class Factory : public ILoggerWithHeader::IFactory {
	public:
		~Factory() { }

		ILogger	*create() {
			return new StreamLogger(std::cout, "Log: ");
		}
	} ;
} ;

#endif // EX04_STREAMLOGGER_HPP
