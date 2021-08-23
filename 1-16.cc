#include <iostream>

int main()
{
	int val = 0;
	int sum = 0;
 
	while (std::cin >> val) 
	{
		std::cin.clear();
		sum += val;
	}

	std::cout << sum << std::endl;

	return 0;
}	

