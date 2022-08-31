/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:10:32 by mki               #+#    #+#             */
/*   Updated: 2021/09/26 16:54:06 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

class Span
{
private:
    std::vector<int> _vec;
    unsigned int _n;
    Span() {}

public:
    Span(unsigned int N);
    Span(const Span &obj);
    Span &operator=(const Span &obj);
    ~Span();
    void addNumber(int num);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
    class AddException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "vector is full";
        }
    };
    class SpanException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "vector is empty or one";
        }
    };
};

#endif
