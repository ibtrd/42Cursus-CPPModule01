/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 03:11:51 by ibertran          #+#    #+#             */
/*   Updated: 2024/07/23 00:05:02 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	public:
		Harl(std::string level);
		~Harl(void);

		void	complain(void);

	private:
		static const std::string	levels[];
		int							threshold;

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif /* HARL_HPP ********************************************************** */