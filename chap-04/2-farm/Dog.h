#pragma once

#include <iostream>
#include "Animal.h"

class Dog : public Animal
{
public:
    void sing(const char next_char) const override { std::cout << "Waf" << std::endl; }
};
