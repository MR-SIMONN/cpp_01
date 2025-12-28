/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 06:07:01 by moel-hai          #+#    #+#             */
/*   Updated: 2025/12/28 01:35:29 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main (int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./replace_file filename s1 s2" << std::endl;
        return 1;
    }

    if (std::string(argv[2]).empty())
    {
        std::cout << "s1 cannot be empty" << std::endl;
        return 1;
    }

    FileReplacer r(argv[1], argv[2], argv[3]);

    std::string content = r.read();
    if (content.empty())
    {
        std::cout << "Cannot open input file" << std::endl;
        return 1;
    }

    std::string result = r.apply(content);

    if (!r.write(result))
    {
        std::cout << "Cannot create output file" << std::endl;
        return 1;
    }
    
    return 0;
}