#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <cassert>
#include "person.h"

// istream constructor for Person class
Person::Person(std::istream &is) {
    read(is, *this);
}

// Functions members logic
void Person::increase_deposit(double amount) {
    this->deposit += amount;
}

// Functions class helpers definitions
double add(const Person& lhs, const Person& rhs) {
    return lhs.deposit+rhs.deposit;
}

std::istream& read(std::istream& is, Person& item) {
    is >> item.name >> item.address >> item.deposit;
    return is;
}

std::ostream& print(std::ostream& os, const Person& item) {
    os << item.get_name() << " " << item.get_address()
       << " " << item.deposit;
    return os;
}




