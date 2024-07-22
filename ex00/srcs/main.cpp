/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:13:18 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/21 02:50:39 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*ptr;

	ptr = newZombie("heap");
	if (ptr)
	{
		ptr->announce();
		delete ptr;
	}
	randomChump("stack");
	return (0);
}
