#include <iostream>

unsigned long long int fibonacci(unsigned int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
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
    std::cout << sum_of_numbers(fibonacci(n)) << '\n';
}
