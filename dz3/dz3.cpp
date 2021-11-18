#include <iostream>

int main(){
    int a[3][3][3];
    int* d;
    d = &a[1][1][1];
    *d = 10;
    std::cout << *d;
}