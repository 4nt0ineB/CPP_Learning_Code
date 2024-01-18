#pragma once

#include <iostream>

inline void debug(const char* fcn, int p1, int p2)
{
    std::cout << fcn << " called with " << p1 << " and " << p2 << std::endl;
}

inline void debug(int p1, int p2, const char* fcn)
{
    std::cout << fcn << " called with " << p1 << " and " << p2 << std::endl;
}