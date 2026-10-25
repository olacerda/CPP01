/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:19:44 by otlacerd          #+#    #+#             */
/*   Updated: 2026/10/25 22:55:02 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string new_name, Weapon &weapon)
	: weapon(weapon)
{
	this->name = new_name;
	this->weapon.setType("Club");
}

void	HumanA::attack()
{
	std::cout << this->name << " atacks with their " << this->weapon.getType() << std::endl;
}