#include <iostream>
#include <string>

struct Sales_data {
    // member functions
    std::string isbn() const { return bookNo; };
    Sales_data& combine (const Sales_data&);
    double avg_price() const;
    // member attributes
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;        
}

double Sales_data::avg_price() const {
    return (revenue/units_sold);
}

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::ostream &read(std::istream&, Sales_data&);

int main() {
    return 0;
}