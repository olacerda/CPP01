/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:19:51 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/24 22:42:07 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
	this->name = new_name;
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	this->weapon = &new_weapon;
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " atacks with their " << this->weapon->getType() << "\n";
	else
		std::cout << "This Human doesnt have a weapon\n";
}
