/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:13:18 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/21 03:37:47 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout
		<< "Memory address of str:\t\t\t" << &str << "\n"
		<< "Memory address help by stringPTR:\t" << stringPTR << "\n"
		<< "Memory address help by stringREF:\t" << &stringREF << "\n"
		<< "\n"
		<< "Value of the string variable:\t" << str << "\n"
		<< "Value pointed to by stringPTR:\t" << *stringPTR << "\n"
		<< "Value pointed to by stringREF\t" << stringREF
		<< std::endl;
}
