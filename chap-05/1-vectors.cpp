#include <vector>
#include <iostream>

int main()
{
    auto vec = std::vector<int> (4, 0);

    for(auto val: vec)
    {
        std::cout << val << std::endl;
    }

    int t[] = { 0, 1, 2, 3, 4, 5};
    int* iterator = &t[1];

    auto vec2 = std::vector<int>(t, t + 5);

     for(auto val: vec2)
    {
        std::cout << val << std::endl;
    }

    return 0;
}