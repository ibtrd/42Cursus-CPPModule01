/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:54:54 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/23 14:12:32 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

void	read_and_replace(std::ifstream& in, std::ofstream& out, std::string search, std::string replace)
{
	std::string	buffer;
	size_t		pos;

	std::getline(in, buffer, '\0');
	pos = buffer.find(search, 0);
	while (pos != std::string::npos)
	{
		buffer.erase(pos, search.length());
		buffer.insert(pos, replace);
		pos = buffer.find(search, pos + replace.length());
	}
	if (buffer.length() != 0)
		out << buffer;
}


int open_files(std::string filepath, std::ifstream& in, std::ofstream& out)
{
	in.open(filepath.c_str(), std::ios::in);
	if (!in.is_open())
	{
		std::cerr << "Error: " + filepath + ": " << std::strerror(errno) << std::endl;
		return (1);
	}

	out.open(
		filepath.append(".replace").c_str(),
		std::ios::out | std::ios::trunc
	);
	if (!out.is_open())
	{
		std::cerr << "Error: " + filepath + ": " << std::strerror(errno) << std::endl;
		return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " [FILE] [STRING] [STRING]" << std::endl;
		return (1);
	}
	if (!*av[2])
	{
		std::cerr << "Error: Empty search string" << std::endl;
		return (1);
	}

	std::ifstream in;
	std::ofstream out;

	if (open_files(av[1], in, out))
		return (1);
	read_and_replace(in, out, av[2], av[3]);
	return (0);
}
