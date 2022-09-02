#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <iostream>
#include <climits>
#include <algorithm>

class Span
{
private:
	unsigned int		_n;
	std::vector<int>	_vec;
public:
	Span(unsigned int n);
	Span(Span const & obj);
	~Span();
	void addNumber(int num);
	long long shortestSpan();
	long long longestSpan();
	Span & operator=(Span const &obj);
	class TooManyArg : public std::exception
	{
		const char * what() const throw();
	};
	class TooFewArg : public std::exception
	{
		const char *what() const throw();
	};
};

#endif