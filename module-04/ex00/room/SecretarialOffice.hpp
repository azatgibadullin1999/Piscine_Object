/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SecretarialOffice.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:53:43 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 17:20:51 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ROOM_SECRETARIALOFFICE_HPP
# define EX00_ROOM_SECRETARIALOFFICE_HPP

# include <vector>
# include "Room.hpp"

class Form;

class SecretarialOffice : public Room {
private:
	std::vector<Form *>	_archivedForms;
public:
};

#endif // EX00_ROOM_SECRETARIALOFFICE_HPP
