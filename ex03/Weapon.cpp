/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:19:12 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/24 20:28:38 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_value)
{
	this->setType(new_value);
}

const std::string& Weapon::getType()
{
	return this->type;
}

void	Weapon::setType(std::string new_value)
{
	this->type = new_value;
}