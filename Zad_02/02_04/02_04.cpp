#include <iostream>

void binary(unsigned int n)
{
    if (n / 2 == 0) {
        std::cout << n % 2;
        return;
    }
    binary(n / 2);
    std::cout << n % 2;
}

int main()
{
    unsigned int n;
    std::cin >> n;
    binary(n);
    std::cout << '\n';
}
