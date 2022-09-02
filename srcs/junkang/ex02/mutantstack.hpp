#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <list>
#include <iterator>
#include <deque>
#include <stack>

template <typename T, class _Container = std::deque<T>, typename _Stack = std::stack<T, _Container> >
class MutantStack : public _Stack
{
public:
	typedef typename _Container::iterator					iterator;
	typedef typename _Container::const_iterator				const_iterator;
	typedef typename _Container::reverse_iterator			reverse_iterator;
	typedef typename _Container::const_reverse_iterator		const_reverse_iterator;

	MutantStack() : _Stack() {}
	MutantStack(MutantStack const &copy) : _Stack(copy) {}
	MutantStack(_Container const &copy) : std::stack<T, _Container>(copy) {}
	~MutantStack() {}
	MutantStack const &operator=(MutantStack<T> const &obj)
	{
		if (this == &obj)
			return *this;
		*this = _Stack::operator=(obj);
		return *this;
	}

	iterator begin()
	{
		return _Stack::c.begin();
	}
	const_iterator begin() const
	{
		return _Stack::c.begin();
	}
	iterator end()
	{
		return _Stack::c.end();
	}
	const_iterator end() const
	{
		return _Stack::c.end();
	}
	reverse_iterator rbegin()
	{
		return _Stack::c.rbegin();
	}
	const_reverse_iterator rbegin() const
	{
		return _Stack::c.rbegin();
	}
	reverse_iterator rend()
	{
		return _Stack::c.rend();
	}
	const_reverse_iterator rend() const
	{
		return _Stack::c.rend();
	}
};

#endif