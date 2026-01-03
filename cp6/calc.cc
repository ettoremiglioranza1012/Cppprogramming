#include <iostream>
#include <vector>

inline int add(int i1, int i2)
{
    return i1 + i2;
}
inline int sub(int i1, int i2)
{
    return i1 - i2;
}
inline int mul(int i1, int i2)
{
    return i1*i2;
}
inline int divd(int i1, int i2)
{
    return i1/i2;
}

int main() {
    // Pointer to function type alias
    using FPtr = int (*)(int, int);
    std::vector<FPtr> fpvec;
    fpvec.push_back(&add);
    fpvec.push_back(&sub);
    fpvec.push_back(&mul);
    fpvec.push_back(&divd);

    for (auto curr_fptr : fpvec) {
        std::cout << (*curr_fptr)(4,4) << std::endl; 
    }

    return 0;
}

