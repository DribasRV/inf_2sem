#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int primes[2 * 10000], * numbers = new int[10000 * 10000 + 1];
	for (int i = 0; i < 2 * n * log(n) + 1; ++i)
		numbers[i] = i + 1;
	int j = 0;
	for (int i = 1; i < 2 * n * log(n) + 1; ++i) {
		if (numbers[i]) {
			primes[j++] = numbers[i];
			for (int k = 2; numbers[i] * k < 2 * n * log(n); ++k)
				numbers[numbers[i] * k - 1] = 0;
		}
	}
	std::cout << primes[n - 1] << '\n';
}
