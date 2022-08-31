/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:10:50 by mki               #+#    #+#             */
/*   Updated: 2021/09/26 17:04:06 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N)
{
    _n = N;
}
Span::Span(const Span &obj)
{
    this->_n = obj._n;
}
Span &Span::operator=(const Span &obj)
{
    if (this == &obj)
    {
        return (*this);
    }
    this->_n = obj._n;
    return (*this);
}
Span::~Span()
{
}
void Span::addNumber(int num)
{
    if (_vec.size() == _n)
    {
        throw AddException();
    }
    _vec.push_back(num);
}
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        Span::addNumber(*it);
    }
}

int Span::shortestSpan()
{
    int min;

    if (_vec.size() <= 1)
    {
        throw SpanException();
    }
    std::sort(_vec.begin(), _vec.end());
    std::vector<int>::iterator prev = _vec.begin();
    std::vector<int>::iterator curr = _vec.begin() + 1;
    min = *curr - *prev;
    for (unsigned long i = 0; i < _vec.size() - 1; i++)
    {
        min = std::min(min, *curr - *prev);
        curr++;
        prev++;
    }
    return (min);
}
int Span::longestSpan()
{
    if (_vec.size() <= 1)
    {
        throw SpanException();
    }
    std::sort(_vec.begin(), _vec.end(), std::greater<int>());
    return (_vec[0] - _vec[_vec.size() - 1]);
}