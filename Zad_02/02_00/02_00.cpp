#include <iostream>

int minus_of_int(int x)
{
    return -x;
}

int main()
{
    int x;
    std::cin >> x;
    std::cout << minus_of_int(x) << '\n';
}
