/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SecretarialOffice.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:53:43 by larlena           #+#    #+#             */
/*   Updated: 2023/10/06 14:49:40 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ROOM_SECRETARIALOFFICE_HPP
# define EX01_ROOM_SECRETARIALOFFICE_HPP

# include <vector>
# include "Room.hpp"

class Form;

class SecretarialOffice : public Room {
private:
	std::vector<Form *>	_archivedForms;
public:
};

#endif // EX01_ROOM_SECRETARIALOFFICE_HPP
