/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 04:20:47 by moel-hai          #+#    #+#             */
/*   Updated: 2025/11/17 05:50:36 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon 
{
    private:
        std::string type;

    public:
        Weapon();
        Weapon(std::string value);
        ~Weapon();

        const std::string& getType() const;
        void setType(std::string value);
};

#endif