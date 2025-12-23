/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 04:19:09 by moel-hai          #+#    #+#             */
/*   Updated: 2025/11/17 05:46:28 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string text = "HI THIS IS BRAIN";
    std::string* textPtr = &text;
    std::string& textRef = text;

    std::cout << &text << std::endl;
    std::cout << textPtr << std::endl;
    std::cout << &textRef << std::endl;

    std::cout << text << std::endl;
    std::cout << *textPtr << std::endl;
    std::cout << textRef << std::endl;

    return 0;
}
