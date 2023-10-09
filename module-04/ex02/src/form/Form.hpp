/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:48:50 by larlena           #+#    #+#             */
/*   Updated: 2023/10/09 13:44:23 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_FORM_HPP
# define EX01_FORM_FORM_HPP

# include <utility>
# include <memory>

enum class FormType {
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse,
};

class IForm {
public:
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

	virtual void	execute() = 0;

	const FormType	&getFormType() const {
		return _formType;
	}
public:
	class IFactory {
	protected:
		IFactory() { }
	public:
		virtual ~IFactory() { }
		virtual IForm::pointer	create() const = 0;
	};

	template < typename FormCreator >
	class StandardFactory : public IFactory {
	public:
		StandardFactory() { }
		virtual ~StandardFactory() { }
		IForm::pointer create() const override {
			return IForm::pointer(new FormCreator());
		}
	};
};

typename IForm::pointer	createForm(FormType type);

#endif // EX01_FORM_FORM_HPP
