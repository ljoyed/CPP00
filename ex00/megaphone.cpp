/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:34:10 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/20 15:39:03 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int i;
    size_t j;
    
    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            j = 0;
            std::string str(argv[i]);
            while (j < str.length())
            {
                std::cout << (char)std::toupper(str[j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}