#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

int main()
{
    std::cout << "Craow" << std::endl;
    /*
    std::string line;

    auto sentences = std::vector<std::string> {};
    while(true)
    {
        std::getline(std::cin, line);
        if(line.empty()){
            break;
        }
        sentences.emplace_back(line);
    }
    for (auto sentence : sentences)
    {
        std::cout << "Craow " << sentence << std::endl;
    }
    */
   std::stringstream builder;
   while(true)
    {
        std::string line;
        std::getline(std::cin, line);
        if(line.empty()){
            break;
        }
        builder << "Craow " << line << std::endl;
    }
    std::cout << builder.str();
    
    return 0;
}
