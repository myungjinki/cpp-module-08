/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:54:29 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/29 15:22:41 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int     main(void)
{
    int         arr[5] = {1, 2, 3, 4, 5};
    char        arr2[5] = {'a', 'b', 'c', 'd', 'e'};

    std::vector<int>    v (arr, arr + sizeof(arr)/sizeof(arr[0]));
    std::vector<char>   v2 (arr2, arr2 + 5);

    std::cout << "\033[1;31mfind 1 in {1,2,3,4,5}\033[0m" << std::endl;
    try
    {
        easyfind(v, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\033[1;31mfind 100 in {1,2,3,4,5}\033[0m" << std::endl;
    try
    {
        easyfind(v, 100);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\033[1;31mfind 'c' in {'a', 'b', 'c', 'd', 'e'}\033[0m" << std::endl;
    try
    {
        easyfind(v2, 'c');
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\033[1;31mfind 'g' in {'a', 'b', 'c', 'd', 'e'}\033[0m" << std::endl;
    try
    {
        easyfind(v2, 'g');
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}