#pragma once

#include <string>
#include <functional>

class ComparableDog
{
public:
    ComparableDog(const std::string& name, const std::string& species)
        : _name { name }
        , _species { species }
    {}

private:
    std::string _name;
    std::string _species;
};

class HashableDog
{
public:
    HashableDog(const std::string& name, const std::string& species)
        : _name { name }
        , _species { species }
    {}

private:
    std::string _name;
    std::string _species;
};

namespace std {

template <>
struct hash<HashableDog>
{
    size_t operator()(const HashableDog& c) const
    {
        return /* some value that can be computed from c */;
    } 
};

}
