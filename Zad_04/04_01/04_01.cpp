#include <iostream>

int main(){
    int size;
    std::cin >> size;
    std::cout << ceil((log2(size) + 20.0) / 8.0) << '\n';
    return 0;
}
