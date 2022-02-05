#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int z = 0, o = 0;

	while (n) {
		if (n % 2)
			++o;
		else
			++z;
		n /= 2;
	}

	for (int i = 0; i < o; ++i)
		std::cout << 1;
	for (int i = 0; i < z; ++i)
		std::cout << 0;
}
