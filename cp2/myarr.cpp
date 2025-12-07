#include <iostream>

using namespace std;

void ex_1() {
    constexpr size_t sz = 10;
    unsigned int arr[sz] = {};
    for (int i = 0; i < sz; ++i) {
        arr[i] = i;
    }
    unsigned int second_array[sz] = {};
    for (int i = 0; i < sz; ++i) {
        cout << arr[i];
        second_array[i] = arr[i];
    }
    cout << endl;
    cout << "Second array copied" << endl;
}

void ex_2() {
    vector<int> ivec1;
    int sz = 10;
    for (int i = 0; i < sz; ++i) {
        ivec1.push_back(i);
    }
    auto ivec2 = ivec1;
    cout << "First vec augmented and copied" << endl;
    vector<int>::const_iterator it = ivec2.cbegin();
    auto end_it = ivec2.cend();
    cout << "Second vector content:";
    for (; it != end_it; ++it) {
        cout << *it;
    }
    cout << endl;
}

void ex_3() {
    constexpr size_t sz = 5;
    int data[sz] = {0,1,2,3,4};
    int *p = data;
    int *plast = p + (sz-1);
    for (; p < plast; ++p) {
        *p = 0;
        cout << *p << endl;
    }
    
}

void ex_4() {
    constexpr size_t sz = 5;
    int arr1[sz] = {0,1,2,3,4};
    int arr2[sz] = {0,1,2,3,5};
    int *p1 = arr1, *p2 = arr2;
    int *plast = p1 + (sz-1);
    while (*p1 == *p2) {
        if (p1 == plast || p2 == plast) {
            cout << "Arrays are equal" << endl;
            return;
        }
        ++p1; ++p2;
    }
    cout << "Arrays are not equal" << endl;

    vector<int> ivec1 = {1,1,1};
    vector<int> ivec2 = {1,1,1};
    auto it1 = ivec1.cbegin(), it2 = ivec2.cbegin();
    auto end1 = ivec1.cend(), end2 = ivec2.cend();
    while (*it1 == *it2) {
        if (it1 == end1 || it2 == end2) {
            cout << "Vector are equal" << endl;
            return;
        }
        ++it1; ++it2;
    }
    cout << "Vectors are not equal" << endl;
}

int main() {
    ex_4();
    return 0;
}
