#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < a; ++i)
		if (!(a % (i + 1)))
			std::cout << i + 1 << ' ';
}
