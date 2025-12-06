#include <iostream>
#include <cctype>

using std::cout; using std::cin;
using std::endl;
using std::string;

string max(string s1, string s2) {
    return (s1.size() > s2.size() ? s1 : s2);
}

void isin(string str, char tofind) {
    for (auto c : str) {
        cout << c << endl;
        cout << tofind << endl;
        if (c == tofind) {
            cout << "found " << tofind << endl;
            return;
        }
        cout << "character not found" << endl;
        return;
    }
}

void censure(string &str) {
    for (decltype(str.size()) index = 0;
            index != str.size(); ++index) {
        str[index] = 'X';
    }
}

void remove_punct(string &str) {
    if (str.empty()) {
        cout << "string is empty" << endl;
        return;
    }
    for (auto &c : str) {
        if (ispunct(c)) {
            c = ' ';
        }
    }
}

int main() {
    
    string str1, str2; 
    string last_istr1_cp, last_istr2_cp;
    char tofind;  
    
    while ((cin >> str1 && str1 != "stop") && (cin >> str2 &&  str2 != "stop")) {
        if (str1.size() == str2.size()) cout << "string have same length" << endl;
        else cout << max(str1, str2) << " is the bigger one" << endl;
        last_istr1_cp = str1;
        last_istr2_cp = str2;
    }

    cout << "character to find" << endl;
    cin >> tofind;

    isin(last_istr1_cp, tofind);
    censure(last_istr1_cp);
    cout << "String censured " << last_istr1_cp << endl;
    remove_punct(last_istr2_cp);
    cout << "String cleaned " << last_istr2_cp << endl;
    return 0;
}
