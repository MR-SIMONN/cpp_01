/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 06:19:24 by moel-hai          #+#    #+#             */
/*   Updated: 2025/11/17 06:20:24 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my burger" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding bacon costs more money" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve some extra bacon for free" << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string keys[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*funcs[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    for (int i = 0; i < 4; i++)
    {
        if (level == keys[i])
        {
            (this->*funcs[i])();
            return;
        }
    }
}
