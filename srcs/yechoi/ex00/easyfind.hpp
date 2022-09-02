/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:39:21 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/29 15:25:21 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <string>

class NotFoundError: public std::exception
{
    public:
        const char* what() const throw()
        {
            return ("Not Found.");
        }
};

template <typename T>
void     easyfind(T t, int value)
{
    typename T::iterator it = std::find(t.begin(), t.end(), value);
    if (it == t.end())
        throw NotFoundError();
    std::cout << "Found." << std::endl;
}

#endif