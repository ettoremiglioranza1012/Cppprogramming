#include <iostream>
using namespace std;

void ex_1() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    // array of size 3; each element is an array of size 4
    int ia[rowCnt][colCnt] = {
        {1, 2, 3, 4},    
        {5, 6, 7, 8},    
        {9, 10, 11, 12}  
    };
    
    // Iterates through the array using a nested range for;
    cout << "--- Range based for ---" << endl;
    for (const int (&row)[colCnt] : ia) {
        for (const int col : row) {
            cout << col << endl;
        }
    }

    // Iterates through the array using indexing and subscripts;
    cout << "--- Subscripts ---" << endl;
    for (size_t row = 0; row != rowCnt; ++row) {
        for (size_t col = 0; col != colCnt; ++col) {
            cout << ia[row][col] << endl;
        }
    }

    // using pointers
    cout << "--- Pointers ---" << endl;
    for (int (*p)[colCnt] = begin(ia); p != end(ia); ++p) {
        for (int *q = begin(*p); q != end(*p); ++q) {
            cout << *q << endl;
        }
    }
}

void ex_2() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    using array_int = int[colCnt];
    // array of size 3; each element is an array of size 4
    int ia[rowCnt][colCnt] = {
        {1, 2, 3, 4},    
        {5, 6, 7, 8},    
        {9, 10, 11, 12}  
    };    

    // Iterates through the array using a nested range for;
    for (const array_int &row : ia) {
        for (int col : row) {
            cout << col << endl;
        }
    }

    // Iterates through the array using indexing and subscripts;
    for (size_t row = 0; row != rowCnt; ++row) {
        for (size_t col = 0; col != colCnt; ++col) {
            cout << ia[row][col] << endl;
        }
    }

    // using pointers
    for (array_int *p = begin(ia); p != end(ia); ++p) {
        for (int *q = begin(*p); q != end(*p); ++q) {
            cout << *q << endl;
        }
    }
}

void ex_3() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    // array of size 3; each element is an array of size 4
    int ia[rowCnt][colCnt] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Iterates through the array using a nested range for;
    for (auto &row : ia) {
        for (auto col : row) {
            cout << col << endl;
        }
    }

    // Iterates through the array using indexing and subscripts;
    for (size_t row = 0; row != rowCnt; ++row) {
        for (size_t col = 0; col != colCnt; ++col) {
            cout << ia[row][col] << endl;
        }
    }

    // using pointers
    for (auto p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q) {
            cout << *q << endl;
        }
    }
}


int main() {
    ex_3();
    return 0;
}
