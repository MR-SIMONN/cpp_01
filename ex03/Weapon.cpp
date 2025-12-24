/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 04:21:02 by moel-hai          #+#    #+#             */
/*   Updated: 2025/11/17 05:51:08 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string value) : type(value) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string value)
{
    type = value;
}