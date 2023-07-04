/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 02:44:45 by rstride           #+#    #+#             */
/*   Updated: 2023/07/04 17:53:31 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class Array
{
public:
	Array() {buf_ = new T;};

	Array(unsigned int n) : buf_(new T[n]), size_(n) {};
	~Array() { delete [] buf_; }

	Array(Array &target){
		delete [] buf_;
		buf_ = new T[target.size_];
		for (int i=0; i<target.size_; i++)
		{
			buf_[i] = target.buf_[i];
		}
	}

	Array &operator=(const Array &target){
		delete [] buf_;
		buf_ = new T[target.size_];
		for (int i=0; i<target.size_; i++)
		{
			buf_[i] = target.buf_[i];
		}
		return (buf_);
	};

	T operator[](int _idx) const
	{
		if (_idx >= size_)
			throw ("size over..");
		return (buf_[_idx]);
	}

	unsigned int size(void) const {
		return (size_);
	};

	T *buf_;

private:
	unsigned int size_;


};

