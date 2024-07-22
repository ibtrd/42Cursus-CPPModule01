#include "Weapon.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 03:58:08 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/21 03:58:24 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string initialType)
: type(initialType)
{
}

const std::string& Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}
