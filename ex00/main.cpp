/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 04:11:34 by moel-hai          #+#    #+#             */
/*   Updated: 2025/11/17 05:40:28 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("Foo");
    Zombie* heapZombie = newZombie("walker");
    heapZombie->announce();
    delete heapZombie;

    return 0;
}
