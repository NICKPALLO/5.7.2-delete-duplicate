#include <iostream>
#include<set>

int main()
{
	std::set<int,std::greater<int>> my_set;

	int size;
	std::cout << "[IN]: ";
	std::cin >> size;
	int a;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> a;
		my_set.insert(a);
	}
	std::cout << "[OUT]: \n";
	for (const auto& i : my_set)
	{
		std::cout << i << std::endl;
	}
	return 0;
}