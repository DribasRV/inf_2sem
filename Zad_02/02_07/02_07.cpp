#include <iostream>

unsigned long long int nonacci(unsigned int n)
{
    if (n < 8)
        return 0;
    if (n == 8)
        return 1;
    unsigned long long int res = 0;
    for (int i = 0; i < 9; ++i)
        res += nonacci(n - i - 1);
    return res;
}

unsigned int sum_of_numbers(unsigned long long int n)
{
    unsigned int res = 0;
    while (n) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    unsigned int n;
    std::cin >> n;
    std::cout << sum_of_numbers(nonacci(n)) << '\n';
}
