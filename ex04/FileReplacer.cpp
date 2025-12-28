/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 06:05:43 by moel-hai          #+#    #+#             */
/*   Updated: 2025/12/28 01:23:29 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(std::string fileValue, std::string a, std::string b)
    : file(fileValue), s1(a), s2(b){}

std::string FileReplacer::read() const
{
    std::ifstream in(file.c_str());
    if (!in.is_open())
        return "";

    std::string data;
    std::string line;

    while (std::getline(in, line))
    {
        data += line;
        if (!in.eof())
            data += "\n";
    }
    in.close();
    return data;
}

std::string FileReplacer::apply(std::string out) const
{
    size_t pos = 0;

    while ((pos = out.find(s1, pos)) != std::string::npos)
    {
        out.erase(pos, s1.length());
        out.insert(pos, s2);
        pos += s2.length();
    }
    return out;
}

bool FileReplacer::write(std::string text) const
{
    std::ofstream out((file + ".replace").c_str());
    if (!out.is_open())
        return false;

    out << text;

    out.close();
    return true;
}