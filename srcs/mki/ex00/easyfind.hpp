/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:09:15 by mki               #+#    #+#             */
/*   Updated: 2021/09/26 16:37:42 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <algorithm>
#include <vector>
#include <iostream>

class NotFoundException : public std::exception
{
public:
    virtual const char *what() const throw()
    {
        return "Can't find value in the container";
    }
};

template <typename T>
T easyfind(std::vector<T> vector, int value)
{
    typename std::vector<T>::iterator it;
    it = std::find(vector.begin(), vector.end(), value);
    if (it == vector.end())
    {
        throw NotFoundException();
    }
    return std::distance(vector.begin(), it);
}

#endif
