/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:47:04 by gmachado          #+#    #+#             */
/*   Updated: 2024/02/28 03:19:08 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T *m_arr;
		unsigned int m_size;

	public:
		Array(void);
		Array(Array<T> &src);
		Array(unsigned int n);

		~Array(void);

		Array &operator=(Array &src);
		T &operator[](unsigned int idx);
		const T &operator[](unsigned int idx) const;

		unsigned int size(void) const;
};

template <typename T>
Array<T>::Array(void) : m_arr(NULL), m_size(0) { }

template <typename T>
Array<T>::Array(Array<T> &src) : m_arr(new T[src.size()]), m_size(src.size())
{
	for (unsigned int i = 0; i < m_size; ++i)
		m_arr[i] = src[i];
}

template <typename T>
Array<T>::Array(unsigned int n) : m_arr(new T[n]), m_size(n)
{
	for (unsigned int i = 0; i < m_size; ++i)
		m_arr[i] = T();
}

template <typename T>
Array<T>::~Array(void) { delete[] m_arr; }

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &src)
{
	if (this == &src)
		return *this;

	if (m_size != src.size())
	{
		m_size = src.size();
		delete[] m_arr;
		m_arr = new T[m_size];
	}

	for (unsigned int i = 0; i < m_size; ++i)
		m_arr[i] = src[i];

	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int idx)
{
	if (idx >= size())
		throw std::exception();

	return m_arr[idx];
}

template <typename T>
const T &Array<T>::operator[](unsigned int idx) const
{
	if (idx >= size())
		throw std::exception();

	return m_arr[idx];
}

template <typename T>
unsigned int Array<T>::size(void) const { return m_size; }

#endif