/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:09:40 by mki               #+#    #+#             */
/*   Updated: 2021/09/26 17:04:45 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

#define MAX_NUM 10000

int main()
{
    {
        std::cout << "Default Test" << std::endl;

        Span sp = Span(5);
        try
        {
            sp.addNumber(5);
            sp.addNumber(3);
            sp.addNumber(100);
            // sp.addNumber(2);
            // sp.addNumber(17);
            // sp.addNumber(9);
            // sp.addNumber(11);
            // sp.addNumber(11);
        }
        catch (const Span::AddException &e)
        {
            std::cout << e.what() << '\n';
        }
        try
        {
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (const Span::SpanException &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        std::cout << "Range Test" << std::endl;

        Span sp(MAX_NUM);
        std::vector<int> v;
        for (int i = 0; i < MAX_NUM; i++)
        {
            v.push_back(i * 5);
        }
        try
        {
            sp.addNumber(v.begin(), v.end());
        }
        catch (const Span::AddException &e)
        {
            std::cout << e.what() << '\n';
        }
        try
        {
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (const Span::SpanException &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
