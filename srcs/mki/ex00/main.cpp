/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:10:08 by mki               #+#    #+#             */
/*   Updated: 2021/09/22 14:22:46 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    int loc;

    vec.push_back(3);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(4);

    try
    {
        loc = easyfind(vec, 3);
        std::cout << loc << std::endl;
        loc = easyfind(vec, 4);
        std::cout << loc << std::endl;
        loc = easyfind(vec, 5);
        std::cout << loc << std::endl;
    }
    catch (NotFoundException e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
