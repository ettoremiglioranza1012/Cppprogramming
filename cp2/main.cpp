#include <iostream>
#include "Sales_item.h"


void print_sales_item(const SI sales_item)
{
    std::cout << "Sales_item["
        << "item_id : " << sales_item.id << ",\n" 
        << "\t" << "   units : " << sales_item.units << ",\n" 
        << "\t" << "   price : " << sales_item.price << "]" 
        << std::endl;
}

bool compare_sales_id(const SI si_1, const SI si_2)
{
    if (si_1.id == si_2.id) return 1;
    else return 0;
}

int main() {
    SI si_1, si_2;
    si_1.id = "YZ-efgh-5678";
    si_1.units = 4;
    si_1.price = 45.50;
    si_2.id = "YZ-efgh-5677";
    si_2.units = 8;
    si_2.price = 95.75;   

    print_sales_item(si_1);
    print_sales_item(si_2);

    std::cout << "Total price for "
        << si_2.id << " is " 
        << si_2.calculate_total() << std::endl;

    bool flag = compare_sales_id(si_1, si_2);
    if (flag) std::cout << "The orders have the same id" << std::endl;
    else std::cout << "Orders have different ids" << std::endl;

    return 0;
}
