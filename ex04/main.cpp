/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 22:46:26 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/25 00:19:11 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "work_folder.hpp"

int	main(int argc, char *argv[])
{
	if (argc <= 3)
	{
		std::cout << "Unsuficient number of paramaters to replace. At least 3" << std::endl;
		return 0;
	}
	std::ifstream file_to_read(argv[1]);
	if (!file_to_read.is_open())
	{
		std::cout << "File: " << argv[1] << "couldnt be opened\n" << std::endl;
		return 1;
	}
	std::ofstream file_to_write("result.replace");
	if (!file_to_write.is_open())
	{
		std::cout << "An error occurred while creating the file \"result.replace\"" << std::endl;
		return 1;
	}
	file_to_write << work_folder(file_to_read, argv[2], argv[3]);
}