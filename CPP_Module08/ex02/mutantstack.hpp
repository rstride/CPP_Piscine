/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 16:42:20 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:42:59 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) {};
	virtual ~MutantStack(void) {};
	MutantStack& operator=(const MutantStack& target) {*this = target; return *this;};
	MutantStack(const MutantStack& target) {*this = target;};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	// > https://en.cppreference.com/w/cpp/container
	// > https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
	iterator							begin(void) { return (this->c.begin()); };
	iterator							end(void)			{ return (this->c.end()); };
	const_iterator						cbegin(void) const	{ return (this->c.cbegin()); };
	const_iterator						cend(void) const	{ return (this->c.cend()); };
	reverse_iterator					rbegin(void)		{ return (this->c.rbegin()); };
	reverse_iterator					rend(void)			{ return (this->c.rend()); };
	const_reverse_iterator				crbegin(void) const	{ return (this->c.crbegin()); };
	const_reverse_iterator				crend(void) const	{ return (this->c.crend()); };

};

#endif