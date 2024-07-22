/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:26:13 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/21 03:07:18 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*ptr;

	ptr = new Zombie[N];
	if (!ptr)
		return (NULL);
	for (int i = 0; i < N; i++)
		ptr[i].setName(name);
	return (ptr);
}
