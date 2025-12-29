#include <iostream>

void swap(int *p1, int *p2);

int main() {
    int i1 = 10, i2 = 20;
    int *p1 = &i1, *p2 = &i2;
    std::cout << "Integer 1: " << *p1 << std::endl;
    std::cout << "Integer 2: " << *p2 << std::endl;
    swap(p1, p2);
    std::cout << "Integer 1: " << *p1 << std::endl;
    std::cout << "Integer 2: " << *p2 << std::endl;
    return 0;
}

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return;
}