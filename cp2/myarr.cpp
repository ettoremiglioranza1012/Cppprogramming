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

int main() {
    ex_2();
    return 0;
}
