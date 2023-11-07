/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PersonAliases.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:38:48 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:47:56 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PERSON_PERSONALIASES_HPP__
# define __EX03_PERSON_PERSONALIASES_HPP__

# include "../pattern_base_classes/Factory.hpp"

class Person;
class Stuff;
namespace ft::__details {
class HeadmasterBase;
class ProfessorBase;
class SecretaryBase;
class StudentBase;
} // namespace ft::details

using Headmaster = ft::pattern::factory::FactoryWrapper<ft::__details::HeadmasterBase>;
using Secretary = ft::pattern::factory::FactoryWrapper<ft::__details::SecretaryBase>;
using Professor = ft::pattern::factory::FactoryWrapper<ft::__details::ProfessorBase>;
using Student = ft::pattern::factory::FactoryWrapper<ft::__details::StudentBase>;

#endif // __EX03_PERSON_PERSONALIASES_HPP__