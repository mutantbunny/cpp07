/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:20:35 by gmachado          #+#    #+#             */
/*   Updated: 2024/02/13 22:56:42 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, const size_t len, void (*fn)(T elem))
{
	for (size_t i = 0; i < len; ++i)
		fn(arr[i]);
}

template <typename T>
void iter(T const *arr, const size_t len, void (*fn)(const T &elem))
{
	for (size_t i = 0; i < len; ++i)
		fn(arr[i]);
}

template <typename T>
void generic_print(T &elem)
{
	std::cout << elem << std::endl;
}

#endif
