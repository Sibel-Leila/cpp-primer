#include <iostream>

int main()
{
	int i, j;

	std::cin >> i >> j;

	while (i <= j) {
		std::cout << i << " ";
		i ++;
	}
	std::cout << std::endl;
	return 0;
}
