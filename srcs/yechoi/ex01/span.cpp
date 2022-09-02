/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:25:56 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/29 17:42:29 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n)
    :_n(n)
{
}

Span::Span(const Span& ref)
    : _n(ref._n), _v(ref._v)
{
}

Span& Span::operator=(const Span& ref)
{
    if (this == &ref)
        return (*this);
    *this = Span(ref);
    return (*this);
}

Span::~Span()
{
}

std::vector<int>    Span::getVector()
{
    return (_v);
}

void                Span::addNumber(int value)
{
    if (_v.size() >= _n)
        throw Span::NoSpaceException();
    _v.push_back(value);
}

unsigned int        Span::longestSpan()
{
    if (_v.size() < 2)
        throw Span::NoSpanException();
    int min = *std::min_element(_v.begin(), _v.end());
    int max = *std::max_element(_v.begin(), _v.end());
    return (max - min);
}

unsigned int        Span::shortestSpan()
{
    if (_v.size() < 2)
        throw Span::NoSpanException();
    std::vector<int> v(_v);
    std::vector<int> span(_v.size());

    std::sort(v.begin(), v.end());
    std::adjacent_difference(v.begin(), v.end(), span.begin());
    std::sort(span.begin(), span.end());
    return (span[0]);
}

const char* Span::NoSpaceException::what() const throw()
{
    return ("No Space Exception.");
}

const char* Span::NoSpanException::what() const throw()
{
    return ("No Span Exception.");
}