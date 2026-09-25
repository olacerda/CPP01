/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_folder.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:20:25 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/25 00:20:50 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "work_folder.hpp"

void	switch_occurrences(std::string& line, std::string to_find, std::string replacement)
{
	std::string::size_type pos;

	while ((pos = line.find(to_find)) != std::string::npos)
	{
		line.erase(pos, to_find.length());
		line.insert(pos, replacement);
	}
}

std::string	work_folder(std::ifstream& file, std::string to_find, std::string replacement)
{
	std::string line;
	std::string final_line;

	while (std::getline(file, line))
	{
		switch_occurrences(line, to_find, replacement);
		final_line += line;
		if (!file.eof())
			final_line += "\n";
	}
	return (final_line);
}