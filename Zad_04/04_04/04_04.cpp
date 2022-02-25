#include <iostream>

void swap(int* a, int* b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(){
    return 0;
}
