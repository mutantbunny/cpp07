/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 01:50:44 by gmachado          #+#    #+#             */
/*   Updated: 2024/02/14 03:30:31 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	std::cout << "Test Array class:\n";
	std::cout << "\n-> Create empty int Array with no-parameter constructor.\n";

	Array<int> empty;

	std::cout << "--> Size of the empty array: " <<empty.size() << std::endl;

	try
	{
		std::cout << "--> Try to access index 0 of the array: " << std::endl;
		int elem = empty[0];
		std::cout << "--> Success! Contents: " << elem << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "--> Caught exception: " << e.what() << std::endl;
	}

	std::cout << "\n-> Create int Array with five elements using the "
		<< "size parameter constructor.\n";

	Array<int> five_ints(5);

	std::cout << "--> Size of the array: " <<five_ints.size() << std::endl;

	try
	{
		std::cout << "--> Try to access indices 0 to 5 of the five-element "
			<< "int array: " << std::endl;
		for (unsigned int i = 0; i < 6; ++i)
		{
			int elem = five_ints[i];
			std::cout << "--> Success! Index: " << i
				<< ", Contents: " << elem << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "--> Caught exception: " << e.what() << std::endl;
	}

	std::cout << "\n-> Create string Array with three elements using "
		<< "the size parameter constructor.\n";

	Array<std::string> three_strs(3);

	std::cout << "--> Size of the array: " <<three_strs.size() << std::endl;

	try
	{
		std::cout << "--> Try to access index 2 of the array: " << std::endl;
		std::string elem = three_strs[2];
		std::cout << "--> Success! Contents: " << elem << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "--> Caught exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "--> Try to access index 3 of the array: " << std::endl;
		int elem = five_ints[3];
		std::cout << "--> Success! Contents: " << elem << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "--> Caught exception: " << e.what() << std::endl;
	}

	std::cout << "\n-> Create copy of the five-element int Array using "
		<< "the copy constructor.\n";

	Array<int> five_ints_clone(five_ints);

	try
	{
		std::cout << "--> Try to access contents of the five-element "
			<< "int array clone: " << std::endl;
		for (unsigned int i = 0; i < 5; ++i)
		{
			int elem = five_ints[i];
			std::cout << "--> Success! Index: " << i
				<< ", Contents: " << elem << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "--> Caught exception: " << e.what() << std::endl;
	}

	std::cout << "\n-> Assign contents of the five-element int array "
		<< "to the empty int array." << std::endl;

	empty = five_ints;

	try
	{
		std::cout << "--> Try to access contents of the previously empty "
			<< "int array: " << std::endl;
		for (unsigned int i = 0; i < 5; ++i)
		{
			int elem = empty[i];
			std::cout << "--> Success! Index: " << i
				<< ", Contents: " << elem << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "--> Caught exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "--> Try to assign new values to each element of the "
			<< "previously empty int array: " << std::endl;
		for (unsigned int i = 0; i < 5; ++i)
		{
			empty[i] = i;
			int elem = empty[i];
			std::cout << "--> Success! Index: " << i
				<< ", Contents: " << elem << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "--> Caught exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
}