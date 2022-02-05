#include <iostream>

int main()
{
	int ans = 0;
	char a;
	do {
		std::cin >> a;
		if (a == '1')
			++ans;
	} while (a == '0' || a == '1');
	std::cout << ans << '\n';
}
