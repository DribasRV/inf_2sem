#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    std::cout << (a % 13 ? "No\n" : "Yes\n");
}
