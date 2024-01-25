#pragma once

#include <vector>
#include <ostream>

using Vertex = std::pair<int, int>;

class Polygon
{

    friend std::ostream& operator<<(std::ostream& stream, Polygon polygon);

    std::vector<Vertex> _vertices;

    
public:
    void   add_vertex(int a, int b);
    Vertex operator[](unsigned int index) const;

    
};

std::ostream& operator<<(std::ostream& stream, Polygon polygon);