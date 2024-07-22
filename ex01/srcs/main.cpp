/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:13:18 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/21 03:11:13 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*ptr;

	ptr = zombieHorde(1, "ONE");
	ptr->announce();
	delete [] ptr;

	std::cout << std::endl;

	ptr = zombieHorde(3, "THREE");
	for (int i = 0; i < 3; i++)
		ptr[i].announce();
	delete [] ptr;

	std::cout << std::endl;

	ptr = zombieHorde(5, "FIVE");
	for (int i = 0; i < 5; i++)
		ptr[i].announce();
	delete [] ptr;
	
	return (0);
}
