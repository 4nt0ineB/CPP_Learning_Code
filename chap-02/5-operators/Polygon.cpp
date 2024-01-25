#include "Polygon.h"
#include <sstream>

void Polygon::add_vertex(int a, int b)
{
    _vertices.emplace_back(a, b);
}

Vertex Polygon::operator[](unsigned int index) const
{
    return _vertices[index];
}

std::ostream& operator<<(std::ostream& stream, Polygon polygon)
{
    std::string delim = "";
    for(auto vertex: polygon._vertices)
    {    
        stream << delim;
        stream  << "(" << vertex.first << "," << vertex.second << ")";
        delim = ", ";
    }

    return stream;
}