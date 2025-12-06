#include <iostream>
#include <string>

using namespace std;

void ex_3_22() {
    vector<string> text;
    string word;
    while(cin >> word) {
        text.push_back(word);
    }
    cout << "Read all elements from text" << endl;
    for (auto it = text.cbegin();
            it != text.cend() && !it->empty(); ++it)
        cout << *it << endl;
    cout << "Change everything to uppercase!" << endl;
    for(auto it = text.begin();
            it != text.cend() && !it->empty(); ++it) {
        for (auto &c : *it) {
            c = toupper(c);
        } 
        cout << *it << endl;
    }
}

void ex_3_23() {
    vector<int> ivec (10, 1);
    cout << "Read vector values:" << endl;
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it *= 2;
        cout << *it << endl;
    }
}

void ex_3_3() {
    vector<string> text;
    string word;
    while(cin >> word && word != "stop") {
        if (text.empty()) {
            text.push_back(word);
        } else {
            vector<string>::iterator it = text.begin();
            while(word > *it && it != text.end())
                ++it;
            text.insert(it, word);
        }
    }
    cout << "Read vector?" << endl;
    string usin;
    cin >> usin;
    if (usin == "y") {
        auto rit = text.cbegin();
        auto rend = text.cend();
        for (; rit != rend; ++rit)
            cout << *rit << endl;
    }
}

int main() {
    ex_3_3();
    return 0;
}
