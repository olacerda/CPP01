/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 00:25:48 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/25 01:19:38 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->methods[0] = &Harl::debug;
	this->methods[1] = &Harl::info;
	this->methods[2] = &Harl::warning;
	this->methods[3] = &Harl::error;
}

void	Harl::complain(std::string level)
{
	std::string messages[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	index;

	index = 0;
	while (index < 4)
	{
		if (messages[index] == level)
			break ;
		index++;
	}
	if (index < 4)
		(this->*methods[index])();
	else
		std::cout << "No comment found" << std::endl;
	std::cout << "\n";
}

void	Harl::debug(void)
{
	std::cout << "I really have to debug this, somebody help me!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Did you know that whales have hip bones from their evolutionary ancestor's legs?" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "You better stop doing this, this is your first and last warning!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
}
