/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Factory.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:07:17 by larlena           #+#    #+#             */
/*   Updated: 2023/10/31 18:57:35 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX03_PATTERN_BASE_CLASSES_FACTORY_HPP__
# define __EX03_PATTERN_BASE_CLASSES_FACTORY_HPP__

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
	typename IFactory<BaseClass>::pointer create() const override {
		return std::make_shared(DerivedClass());
	}
};

template <typename WrappedClass>
class FactoryWrapper : public WrappedClass {
protected:
	// FactoryWrapper() = delete;
	// FactoryWrapper(const FactoryWrapper &other) = delete;
	// FactoryWrapper(FactoryWrapper &&other) = delete;
	// FactoryWrapper	&operator = (const FactoryWrapper &other) = delete;
	// FactoryWrapper	&operator = (FactoryWrapper &&other) = delete;

public:
	template <typename ... Args>
	FactoryWrapper(Args&& ... args) :
	WrappedClass(std::forward<Args>(args) ...) { }
	virtual ~FactoryWrapper() { }

	template <typename ... Args>
	static std::shared_ptr<FactoryWrapper> create(Args&& ... args) {
		return std::make_shared<FactoryWrapper>(std::forward<Args>(args) ...);
	}
};

// template <typename InheritedClass>
// class EnableSharedFactory : std::enable_shared_from_this<InheritedClass> {
// protected:
// 	EnableSharedFactory() { }
// public:
// 	virtual ~EnableSharedFactory() { }
// 	template <typename ... Args>
// 	static std::shared_ptr<InheritedClass> create(Args&& ... args) {
// 		return make_shared(InheritedClass(std::forward<Args>(args) ...));
// 	}
// };

} } } // namespace ft::pattern::factory

#endif // __EX03_PATTERN_BASE_CLASSES_FACTORY_HPP__