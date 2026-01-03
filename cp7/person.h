#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <cassert>

class Person {
    // friend helper functions 
    friend double add(const Person&, const Person&);
    friend std::ostream& print(std::ostream&, const Person&);
    friend std::istream& read(std::istream&, Person&);
    
    // Public API of Person Class
    public: 
        // constructors
        Person() = default;
        Person(const std::string &n): name(n) { }
        Person(const std::string &n, const std::string &a, double b) :
            name(n), address(a), deposit(b) { }
        Person(std::istream &); 
        // member functions prototypes
        const std::string& get_name() const { return name; };
        const std::string& get_address() const { return address; };
        const double get_deposit() const { return deposit; };
        void new_name(const std::string& new_name) { name = new_name; };
        void new_address(const std::string& new_add) { address = new_add; };
        void increase_deposit(double amount);
         
    // Private members
    private:
        // member attributes
        std::string name = "NoName";
        std::string address = "EmptyAddress";
        double deposit = 0.0;
};

// Functions class helpers prototypes
double add(const Person&, const Person&);
std::ostream& print(std::ostream&, const Person&);
std::istream& read(std::istream&, Person&);

#endif