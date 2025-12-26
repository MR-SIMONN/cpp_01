/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 06:15:46 by moel-hai          #+#    #+#             */
/*   Updated: 2025/11/17 06:15:48 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>
#include <iostream>
#include <fstream>

class FileReplacer
{
private:
    std::string file;
    std::string s1;
    std::string s2;

public:
    FileReplacer(std::string file, std::string s1, std::string s2);

    std::string read() const;
    std::string apply(std::string out) const;
    bool write(std::string text) const;
};

#endif