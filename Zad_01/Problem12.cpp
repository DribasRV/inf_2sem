#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int ans[100];
	int i = 0;
	while (n != 0) {
		ans[i] = n % 2;
		++i;
		n /= 2;
	}
	for (int j = i; j > 0; --j)
		std::cout << ans[j - 1];
}
