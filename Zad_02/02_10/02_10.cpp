#include <iostream>

char get_a_letter()
{
    char c;
    do
        std::cin >> c;
    while (!(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'));
    return c;
}

char unleveling(char c)
{
    if (c >= 'a' && c <= 'z')
        c += 'A' - 'a';
    return c;
}

int main()
{
    for (int i = 0; i < 10; ++i)
        std::cout << unleveling(get_a_letter());
    std::cout << '\n';
}
