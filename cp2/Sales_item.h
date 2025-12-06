
#ifndef SALES_ITEM_H
#define SALES_ITEM_H

#include <iostream>
#include <string>

struct Sales_item {
    std::string id = "XX-abcd-1234";
    unsigned int units = 0;
    double price = 0.0;

    double calculate_total() {
        return units * price;
    }
};

using SI = Sales_item;

#endif

