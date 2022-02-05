#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i + j >= n / 2 && i + j < n + n / 2 && i - j <= n / 2 && j - i <= n / 2)
				std::cout << '+';
			else
				std::cout << ' ';
		}
		std::cout << '\n';
	}
}
