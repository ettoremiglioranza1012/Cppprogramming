#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main() 
{
    int int1 = 0, int2 = 0;
    
    do 
    {
        cout << "Insert two integers:" << endl;
        cin >> int1 >> int2;
        try
        {
            if (int2 == 0)
                throw runtime_error("Division by 0");
            cout << "Division of " << int1 << " by " << int2
                 << " is " << int1 / int2 << endl;
        }
        catch (runtime_error err)
        {
            cout << err.what() 
                 << "\nTry again" << endl;
        }
    } while (cin);

    return 0;
}