/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PersonAliases.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:38:48 by larlena           #+#    #+#             */
/*   Updated: 2023/11/01 00:53:34 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_PERSONALIASES_HPP__
# define __EX03_PERSON_PERSONALIASES_HPP__

# include "../pattern_base_classes/Factory.hpp"

namespace ft::details {
class HeadmasetBase;
class ProfessorBase;
class SecretaryBase;
class StudentBase;
} // namespace ft::details

using Student = ft::pattern::factory::FactoryWrapper<ft::details::StudentBase>;
using Headmaset = ft::pattern::factory::FactoryWrapper<ft::details::HeadmasetBase>;
using Professor = ft::pattern::factory::FactoryWrapper<ft::details::ProfessorBase>;
using Secretary = ft::pattern::factory::FactoryWrapper<ft::details::SecretaryBase>;

#endif // __EX03_PERSON_PERSONALIASES_HPP__