#include <iterator>
#include <iostream>
#include <vector>

void print_vec(
    std::vector<int> &ivec,
    std::vector<int>::const_iterator beg,
    std::vector<int>::const_iterator end)
{
#ifndef NDEBUG
    std::cerr << __func__ << ": vector size is "
              << ivec.size() << std::endl;
#endif
    if (beg == end)
    {
        return;
    }
    std::cout << *beg << std::endl;
    print_vec(ivec, std::next(beg), end);
    return;
}

int main()
{
    std::vector<int> ivec;
    std::cout << "Insert vector content:" << std::endl;
    int curr_in;
    while (std::cin >> curr_in)
    {
        ivec.push_back(curr_in);
    }
    std::cout << std::endl;
    std::vector<int>::const_iterator beg = ivec.cbegin();
    std::vector<int>::const_iterator end = ivec.cend();
    print_vec(ivec, beg, end);
}