#include <iostream>

using namespace std;

void ex_1() {
    // int arr[] = {1,2,3,4,5};
    // vector<int> ivec(begin(arr), end(arr));
    std::vector<int> ivec = {1,2,3};
    decltype(ivec.size()) array_size = ivec.size();
    int myarray[array_size];

    std::copy(
        ivec.begin(),
        ivec.end(),
        myarray
    );
    
    cout << "Content of the array:" << endl;
    for (unsigned int i = 0; i < array_size; ++i) {
        cout << myarray[i];
    }
    cout << endl;
}

int main() {
    ex_1();
    return 0;
}
