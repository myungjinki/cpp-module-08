/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:09:56 by mki               #+#    #+#             */
/*   Updated: 2021/09/26 17:12:58 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    MutantStack<int> tmp;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top value: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "stack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    tmp = mstack;
    MutantStack<int> tmp2(tmp);
    MutantStack<int>::iterator it = tmp2.begin();
    MutantStack<int>::iterator ite = tmp2.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "value: " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(tmp2);
    return 0;
}