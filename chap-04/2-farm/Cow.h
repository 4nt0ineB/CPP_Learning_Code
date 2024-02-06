#pragma once

#include <iostream>
#include "Animal.h"

class Cow : public Animal
{
public:
    void sing(const char next_char) const override { std::cout << "Mewwwwwh" << std::endl; }
};
