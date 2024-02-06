#pragma once

#include <iostream>
#include "Animal.h"

class Cat : public Animal
{
public:
    void sing(const char next_char) const override { std::cout << "Meow" << std::endl; }
};
