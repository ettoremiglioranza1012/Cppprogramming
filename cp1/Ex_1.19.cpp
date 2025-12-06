#include <iostream> 

int main()
{
    int lb, ub;
    lb = 0; ub = 0;
    std::cout << "Please insert the lower bound: "
        << std::endl;
    std::cin >> lb;
    std::cout << "\n";
    std::cout << "Plrease insert the upper bound "
            << std::endl;
    std::cin >> ub;
    std::cout << "\n";
    if (ub == lb) std::cout << lb;
    if (ub < lb) {
        int tmp = lb;
        lb = ub;
        ub = tmp;
        
    } 
    int curr_value  = lb;
    while (curr_value <= ub) {
        std::cout << curr_value << "\t" << std::endl;
        ++curr_value;
    }
    return 0;
}
