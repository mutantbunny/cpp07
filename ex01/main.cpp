/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:59:35 by gmachado          #+#    #+#             */
/*   Updated: 2024/02/13 22:58:11 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int int_array[] = {5, 4, 3, 2, 1};
	std::string str_array[] = {"banana", "capivara", "pindamonhangaba"};
	double const dbl_array[] = {1.41421, 2.71828, 3.14159, 4.24242};

	std::cout << "Test iter() with integer array: " << std::endl;
	iter<int>(int_array, 5, generic_print);

	std::cout << "\nTest iter() with string array: " << std::endl;
	iter<std::string>(str_array, 3, generic_print);

	std::cout << "\nTest iter() with constant double array: " << std::endl;
	iter<double>(dbl_array, 4, generic_print);
}
