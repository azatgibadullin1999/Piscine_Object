/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   containerAdapter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:19:05 by larlena           #+#    #+#             */
/*   Updated: 2023/10/08 11:08:25 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_CONTAINERADAPTER_HPP
# define EX01_CONTAINERADAPTER_HPP

# include <vector>

template < typename T >
class ContainerAdapter {
public:
	typedef std::vector<T>				container_type;
	typedef typename container_type::value_type	value_type;
	typedef typename container_type::size_type	size_type;
	typedef typename container_type::iterator	iterator;
	typedef typename container_type::const_iterator	const_iterator;
private:
	container_type	_cont;
public:
	ContainerAdapter() { }

	~ContainerAdapter() { }

	const size_type	&size() const {
		return _cont.size();
	}

	value_type	&retrieve(const size_type &index) {
		return _cont[index];
	}

	const value_type	&retrieve(const size_type &index) const {
		return _cont[index];
	}

	const_iterator	begin() const {
		return _cont.begin();
	}

	iterator	begin() {
		return _cont.begin();
	}

	const_iterator	end() const {
		return _cont.end();
	}

	iterator	end() {
		return _cont.end();
	}

	void	add(value_type &&value) {
		_cont.push_back(value);
	}

	void	add(const value_type &value) {
		_cont.push_back(value);
	}
};

#endif // EX01_CONTAINERADAPTER_HPP