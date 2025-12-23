/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 04:17:05 by moel-hai          #+#    #+#             */
/*   Updated: 2025/11/17 05:45:52 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int count = 5;
    Zombie* group = zombieHorde(count, "Walker");

    for (int i = 0; i < count; i++)
        group[i].announce();

    delete[] group;
    return 0;
}
