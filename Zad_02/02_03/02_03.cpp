#include <iostream>

unsigned int sum_of_numbers(unsigned int n)
{
    int ans = 0;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main()
{
    unsigned int n;
    std::cin >> n;
    std::cout << sum_of_numbers(n) << '\n';
}
