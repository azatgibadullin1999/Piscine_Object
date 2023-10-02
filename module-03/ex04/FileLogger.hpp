/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileLogger.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:04:01 by larlena           #+#    #+#             */
/*   Updated: 2023/10/02 15:50:39 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_FILELOGGER_HPP
# define EX04_FILELOGGER_HPP

# include <fstream>
# include "ILogger.hpp"

class FileLogger : public ILogger {
private:
	std::fstream	_fout;
public:
	FileLogger(std::string fileName) :
	_fout(fileName.c_str()) { }
	~FileLogger() { }

	void	write(std::string str) {
		
	}

	class Factory : public ILogger::IFactory {
	public:
		~Factory() { }

		ILogger	*create() {
			return new FileLogger("log.txt");
		}
	} ;
} ;

#endif // EX04_FILELOGGER_HPP
