/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 03:54:02 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/21 05:14:53 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");

		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	{
		Weapon	sword = Weapon("longsword");
		HumanB	tom("Tom");

		tom.attack();
		tom.setWeapon(sword);
		tom.attack();
	}
	{
		Weapon				sword = Weapon("longsword");
		const std::string&	type = sword.getType();

		std::cout << type << std::endl;
		sword.setType("wooden sword");
		std::cout << type << std::endl;
	}
return 0;
}