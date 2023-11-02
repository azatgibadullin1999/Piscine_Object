/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:47:43 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 01:15:41 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PATTERN_BASE_CLASSES_SINGLETONWRAPPER_HPP__
# define __EX03_PATTERN_BASE_CLASSES_SINGLETONWRAPPER_HPP__

namespace ft { namespace pattern { namespace singleton {

template <typename WrappedClass>
class SingletonWrapper final : public WrappedClass {
private:
	SingletonWrapper() { }
public:
	~SingletonWrapper() { }
	SingletonWrapper(const SingletonWrapper &inst) = delete;
	SingletonWrapper(SingletonWrapper &&inst) = delete;
	SingletonWrapper	&operator = (const SingletonWrapper &inst) = delete;
	SingletonWrapper	&operator = (SingletonWrapper &&inst) = delete;

	static SingletonWrapper	&getInstance() {
		static SingletonWrapper	instance;

		return instance;
	}
};

} } } // namespace ft::pattern::singleton

#endif // __EX03_PATTERN_BASE_CLASSES_SINGLETONWRAPPER_HPP__