#include "Harl.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 03:14:31 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/22 03:14:33 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

const std::string	Harl::levels[] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
	""
};

Harl::Harl(std::string level)
{
	int i;

	for (i = 0; this->levels[i].length(); i++)
	{
		if (!levels[i].compare(level))
			break ;
	}
	this->threshold = i;
}

Harl::~Harl(void)
{
}

void Harl::complain(void)
{
	switch (this->threshold)
	{
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break ;
		case 1:
			this->info();
			this->warning();
			this->error();
			break ;
		case 2:
			this->warning();
			this->error();
			break ;
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my\
7XL-double-cheese-triple-pickle-specialketchup burger. I really\
do!\n" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more\
money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be\
asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon\
for free. I’ve been coming for years whereas you started working here since\
last month.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to\
the manager now.\n" << std::endl;
}
