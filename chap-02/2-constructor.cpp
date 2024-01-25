#include <iostream>
#include <string>

class Person
{
public:
    Person () {}

    Person(std::string name, std::string surname) 
        : _name ( name )
        , _surname { surname }
    {

    }

    std::string  get_full_name() const { return _name + " " + _surname; }
    unsigned int get_age() const { return _age; }

    void set_name(std::string name) { _name = name; }
    void set_age(unsigned int age) { _age = age; }
    void wait(unsigned int years) { _age += years; }

private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age;
};

int main()
{
    auto p = Person {"Bruce", "Wayne"};
    //p.wait(23);
    Person p2;

    std::cout << "Person named '" << p.get_full_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
