#pragma once
#include <vector>
#include <memory>
#include "Animal.h"
#include "Chicken.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

class Opera
{
public:
    Opera ()
    {
        _animals.emplace_back(std::make_unique<Dog>());
        _animals.emplace_back(std::make_unique<Cow>());
        _animals.emplace_back(std::make_unique<Chicken>());
        _animals.emplace_back(std::make_unique<Cat>());
    }

    void sing() const 
    {
        for(const auto& animal: _animals)
        {
            animal->sing(' ');
        }
        std::cout << std::endl;
    }
private:
    std::vector<std::unique_ptr<Animal>> _animals;
};