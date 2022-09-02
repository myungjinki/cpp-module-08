#include <iostream>
#include "mutantstack.hpp"
#include <vector>

int main()
{
	std::cout << "=== default=deque ===" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// [...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl;
	
	std::cout << "=== vector ===" << std::endl;

	std::vector<int>		v(1, 10);
	MutantStack<int, std::vector<int> > mstackV(v);
	mstackV.push(5);
	mstackV.push(17);
	std::cout << "top: " << mstackV.top() << std::endl;
	mstackV.pop();
	std::cout << "size: " << mstackV.size() << std::endl;
	mstackV.push(3);
	mstackV.push(5);
	mstackV.push(737);
	// [...]
	mstackV.push(0);
	MutantStack<int, std::vector<int> >::iterator it2 = mstackV.begin();
	MutantStack<int, std::vector<int> >::iterator ite2 = mstackV.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<int, std::vector<int> > s2(mstackV);
	while (!s2.empty())
	{
		std::cout << s2.top() << " ";
		s2.pop();
	}
	std::cout << std::endl;
	return 0;
}