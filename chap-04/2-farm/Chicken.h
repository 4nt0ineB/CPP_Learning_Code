#pragma once

#include <iostream>
#include "Animal.h"

class Chicken : public Animal
{
public:
    ~Chicken() override
    {
        std::cout << "CotCoooooooooot!!" << std::endl;
    }
    void sing(const char next_char) const override { std::cout << "Cotcotcotcodet" << std::endl; }
};
