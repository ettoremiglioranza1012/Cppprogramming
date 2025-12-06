#include <iostream>
#include <vector>

using namespace std;


void ex_1() {
    vector<int> nums = {1,2,3,4};
    cout << nums.size() << endl;
    for (decltype(nums.size()) ix = 0; ix < nums.size(); ix++) {
        cout << nums[ix]; 
    }
    cout << endl; 
}

void ex_2() {
    vector<string> text;
    string word;
    while (cin >> word) {
        text.push_back(word);
    }
    for (string &word : text) {
        for (char &c : word) 
            c = toupper(c);
        cout << word << endl;
    }
}

void ex_3() {
    vector<int> v1 (10, 42);
    for (auto n : v1)
        cout << n << endl;
}

void ex_4() {
    vector<int> vec (11, 42);
    if (vec.size() % 2 != 0) {
        vec[vec.size()-2] += vec[vec.size()-1];
        vec.pop_back();
    } 
    vector<int> sum;
    for (decltype(vec.size()) ix = 0; 
            ix < vec.size(); ++ix) {
        if (ix % 2 != 0) {
            vec[ix-1] += vec[ix];
            cout << vec[ix-1] << endl;
            sum.push_back(vec[ix-1]);
        }
    }
    for (auto x : sum) {
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    ex_4();
    return 0;
}
