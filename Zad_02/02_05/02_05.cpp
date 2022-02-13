#include <iostream>

unsigned long long int factorial(unsigned int n)
{
    if (!n)
        return 1;
    return n * factorial(n - 1);
}

unsigned int sum_of_numbers(unsigned long long n)
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
    std::cout << sum_of_numbers(factorial(n)) << '\n';
}
