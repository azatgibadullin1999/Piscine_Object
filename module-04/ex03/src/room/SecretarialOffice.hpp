/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SecretarialOffice.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:53:43 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:19:26 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_ROOM_SECRETARIALOFFICE_HPP__
# define __EX03_ROOM_SECRETARIALOFFICE_HPP__

# include <vector>
# include "Room.hpp"

class Form;

class SecretarialOffice : public Room {
private:
	std::vector<Form *>	_archivedForms;
public:
};

#endif // __EX03_ROOM_SECRETARIALOFFICE_HPP__
