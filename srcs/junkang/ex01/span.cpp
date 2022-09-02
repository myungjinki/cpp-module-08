#include "span.hpp"

Span::Span(unsigned int n) : _n(n)
{

}
Span::Span(Span const & obj)
{
	*this = obj;
}
Span::~Span()
{
	_vec.clear();
}
void Span::addNumber(int num)
{
	try {
		if (_vec.size() >= _n)
			throw Span::TooManyArg();
		_vec.push_back(num);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
long long Span::shortestSpan()
{
	try
	{
		if (_vec.size() <= 1)
			throw Span::TooFewArg();
		long long		minn = LLONG_MAX, diff;
		sort(_vec.begin(), _vec.end());
		for (unsigned int i = 0; i < (unsigned int)_vec.size() - 1; i++)
		{
			diff = (long long)_vec[i + 1] - (long long)_vec[i];
			if (diff < minn)
				minn = diff;
		}
		return minn;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return -1;
	}
}
long long Span::longestSpan()
{
	try
	{
		if (_vec.size() <= 1)
			throw Span::TooFewArg();
		sort(_vec.begin(), _vec.end());
		return (long long)_vec[_vec.size() - 1] - (long long)_vec[0];
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return -1;
	}
}
Span & Span::operator=(Span const &obj)
{
	if (this == &obj)
		return *this;
	_n = obj._n;
	_vec.clear();
	_vec = obj._vec;
	return (*this);
}
const char * Span::TooManyArg::what() const throw()
{
	return "Error: storage is full";
}
const char * Span::TooFewArg::what() const throw()
{
	return "Error: not enough arguments";
}
