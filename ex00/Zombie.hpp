/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:41:55 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/21 01:55:18 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

 class Zombie
 {
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
 };

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
 

#endif