/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:48:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 00:16:00 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_FORM_FORM_HPP__
# define __EX03_FORM_FORM_HPP__

# include <utility>
# include <memory>
# include "../pattern_base_classes/Factory.hpp"
# include "../pattern_base_classes/Command.hpp"

enum class FormType {
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse,
	MAX,
};

std::array< std::string, static_cast<std::size_t>(FormType::MAX) >	FormTypeString {
	"Course Finished",
	"Need More Class Room",
	"Need Course Creation",
	"Subscription To Course"
};

class IForm : public ft::pattern::command::ICommand {
public:
	typedef ft::pattern::factory::IFactory<IForm>	IFactory;
	typedef std::shared_ptr<IForm>	pointer;
private:
	FormType	_formType;
	std::size_t	_id;
private:
	static const std::size_t	&newID() {
		static std::size_t	_counter = 0;

		return ++_counter;
	}
protected:
	IForm(const FormType &formType) :
	_formType(formType),
	_id(newID()) { }

	IForm(FormType &&formType) :
	_formType(std::move(formType)),
	_id(newID()) { }

	const std::size_t	&getID() const {
		return _id;
	}
public:
	virtual ~IForm() { }

	const FormType	&getFormType() const {
		return _formType;
	}
};

typename IForm::pointer	createForm(FormType type);

#endif // __EX03_FORM_FORM_HPP__
