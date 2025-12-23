/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 04:18:15 by moel-hai          #+#    #+#             */
/*   Updated: 2025/11/17 05:45:11 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int count, std::string value)
{
    if (count <= 0)
        return 0;

    Zombie* group = new Zombie[count];

    for (int i = 0; i < count; i++)
        group[i].setName(value);

    return group;
}