/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 02:02:32 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/21 03:02:16 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << "\n";
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "A Zombie named: \"" << this->name << "\" Have been deleted\n";
}