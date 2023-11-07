/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Factory.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:07:17 by larlena           #+#    #+#             */
/*   Updated: 2023/11/07 10:30:54 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PATTERN_BASE_CLASSES_FACTORY_HPP__
# define __PATTERN_BASE_CLASSES_FACTORY_HPP__

# include <memory>

namespace ft { namespace pattern { namespace factory {

template <typename BaseClass>
class IFactory {
public:
	typedef std::shared_ptr<BaseClass>	pointer;
protected:
	IFactory() noexcept { }
public:
	virtual ~IFactory() { }
	virtual pointer	create() const = 0;
};

template <typename BaseClass, typename DerivedClass>
class StandardFactory : public IFactory<BaseClass> {
public:
	StandardFactory() noexcept { }
	virtual ~StandardFactory() { }
	typename std::shared_ptr<BaseClass> create() const override {
		return std::static_pointer_cast<BaseClass>(std::make_shared<DerivedClass>(DerivedClass()));
	}
};

template <typename WrappedClass>
class FactoryWrapper final : public WrappedClass {
private:
	FactoryWrapper() { }

	template <typename ... Args>
	FactoryWrapper(Args&& ... args) :
	WrappedClass(std::forward<Args>(args) ...) { }
public:
	~FactoryWrapper() { }

	template <typename ... Args>
	static std::shared_ptr<FactoryWrapper> create(Args&& ... args) {
		return std::shared_ptr<FactoryWrapper>(new FactoryWrapper(std::forward<Args>(args) ...));
	}
};

template <typename InheritedClass, typename BaseClass>
class SharedFromThisFactory : public std::enable_shared_from_this<BaseClass> {
protected:
	SharedFromThisFactory() { }
public:
	virtual ~SharedFromThisFactory() { }

	template <typename ... Args>
	static std::shared_ptr<BaseClass> create(Args&& ... args) {
		return std::shared_ptr<BaseClass>(new InheritedClass(std::forward<Args>(args) ...));
	}
};

} } } // namespace ft::pattern::factory

#endif // __PATTERN_BASE_CLASSES_FACTORY_HPP__
