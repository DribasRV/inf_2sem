#include <iostream>

int main()
{
	char c;
	int ans = 0;
	do {
		std::cin >> c;
		if (c >= '0' && c <= '9')
			++ans;
	} while (c != '@');
	std::cout << ans << '\n';
}
