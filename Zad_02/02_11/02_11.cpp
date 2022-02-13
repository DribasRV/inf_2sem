#include <iostream>

unsigned long get_a_hexadecimal()
{
    char c;
    unsigned long long int ans = 0;
    do {
        std::cin.get(c);
        ans *= 16;
        if (c >= '0' && c <= '9')
            ans += c - '0';
        else if (c >= 'A' && c <= 'F')
            ans += c - 'A' + 10;
        else if (c != '\n')
            return 0;
        else
            ans /= 16;
    } while (c != '\n');
    return ans;
}

int main()
{
    std::cout << get_a_hexadecimal() << '\n';
}
