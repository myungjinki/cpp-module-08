#include "easyfind.hpp"
#include <vector>
#include <iostream>

int		main(void)
{
	std::vector<int>		v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	std::cout << *(easyfind(v, 3)) << std::endl;
	if (easyfind(v, 10) == v.end())
		std::cout << "Cannot find arg\n";
	return 0;
}