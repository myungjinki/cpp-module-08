/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:14:10 by mki               #+#    #+#             */
/*   Updated: 2021/09/23 17:54:24 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
    MutantStack()
    {
    }
    MutantStack(const MutantStack &obj)
    {
        operator=(obj);
    }
    MutantStack &operator=(const MutantStack &obj)
    {
        std::stack<T>::operator=(obj);
        return (*this);
    }
    ~MutantStack()
    {
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};

#endif
