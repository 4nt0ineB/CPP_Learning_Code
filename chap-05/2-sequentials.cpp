#include <list>
#include <vector>
#include <stack>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    // Implement array tests here.
}

void try_lists()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int> l3;
    std::list<int> l4;
}

void try_stacks()
{
    auto stack = std::stack<int, std::vector<int>>{};
    stack.push(0);
    stack.push(1);
    stack.push(2);
    
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}