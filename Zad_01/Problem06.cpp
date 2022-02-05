#include <iostream>

int main()
{
    int n;
    unsigned long long ans = 1;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
        ans *= static_cast<unsigned long long>(i) + 1;
    std::cout << ans;
}
