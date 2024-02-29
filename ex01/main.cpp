/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:59:35 by gmachado          #+#    #+#             */
/*   Updated: 2024/02/29 19:46:30 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int int_array[] = {5, 4, 3, 2, 1};
	std::string str_array[] = {"banana", "capivara", "pindamonhangaba"};
	const double dbl_array[] = {1.41421, 2.71828, 3.14159, 4.24242};

	std::cout << "Test iter() with integer array: " << std::endl;
	iter<int>(int_array, 5, generic_print<int>);

	std::cout << "\nTest iter() with string array: " << std::endl;
	iter<std::string>(str_array, 3, generic_print<std::string>);

	std::cout << "\nTest iter() with constant double array: " << std::endl;
	iter<const double>(dbl_array, 4, generic_print<const double>);
}
