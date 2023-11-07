/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SecretarialOffice.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:53:43 by larlena           #+#    #+#             */
/*   Updated: 2023/11/06 20:49:31 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_ROOM_SECRETARIALOFFICE_HPP__
# define __EX03_ROOM_SECRETARIALOFFICE_HPP__

# include <vector>
# include <memory>
# include "Room.hpp"

class Form;

class SecretarialOffice : public Room {
private:
	std::vector<std::shared_ptr<Room>>	_archivedForms;
public:
};

#endif // __EX03_ROOM_SECRETARIALOFFICE_HPP__
