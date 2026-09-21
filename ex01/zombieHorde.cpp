/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 02:02:31 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/21 02:44:45 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	count;

	Zombie *horde = new Zombie[N];
	count = 0;
	while (count < N)
	{
		horde[count].set_name(name);
		count++;
	}
	return horde;
}
