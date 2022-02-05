#include <iostream>

int main()
{
    int n, m1 = 0, m2;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        if (abs(a) > abs(m1)) {
            m1 = a;
            m2 = 0;
        }
        if (a == -m1)
            m2 = a;
    }
    std::cout << m1;
    if (m2)
        std::cout << ' ' << m2;
    std::cout << '\n';
}
