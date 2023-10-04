/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:04 by larlena           #+#    #+#             */
/*   Updated: 2023/10/03 17:21:17 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_PERSON_PROFESSOR_HPP
# define EX00_PERSON_PROFESSOR_HPP

# include "Staff.hpp"

class Course;

class Professor : public Staff {
private:
	Course *_currentCourse;
public:
	void	assignCourse(Course *p_course);
	void	doClass();
	void	closeCourse();
};

#endif // EX00_PERSON_PROFESSOR_HPP
