/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_folder.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:20:37 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/25 00:07:35 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_FOLDER_HPP
# define READ_FOLDER_HPP

# include <iostream>
# include <fstream>

void		switch_occurrences(std::string& line, std::string to_find, std::string replacement);
std::string	work_folder(std::ifstream& file, std::string to_find, std::string replacement);


#endif