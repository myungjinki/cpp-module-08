/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:25:53 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/29 17:42:09 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Span
{
    private:
        unsigned int        _n;
        std::vector<int>    _v; 
        Span();

    public:
        Span(unsigned int n);
        Span(const Span& ref);
        Span& operator=(const Span& ref);
        ~Span();

        std::vector<int>    getVector();

        void                addNumber(int value);
        unsigned int        longestSpan();
        unsigned int        shortestSpan();

        class NoSpaceException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class NoSpanException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

#endif