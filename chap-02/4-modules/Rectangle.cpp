#include "Rectangle.h"

// float Rectangle::_default_size = 1.f;

Rectangle::Rectangle()
    : Rectangle { Rectangle::_default_size }
{}

Rectangle::Rectangle(float size)
    : Rectangle { size, size }
{}

Rectangle::Rectangle(float length, float width)
    : _length { length }
    , _width { width }
{}

float Rectangle::get_length() const
{
    return _length;
}

void Rectangle::set_default_size(float size)
{
    _default_size = size;
}

float Rectangle::get_width() const
{
    return _width;
}

void Rectangle::scale(float ratio)
{
    _length *= ratio;
    _width *= ratio;
}
