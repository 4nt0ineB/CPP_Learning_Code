#pragma once

class Rectangle
{
public:
    Rectangle();
    Rectangle(float size);
    Rectangle(float length, float width);

    float get_length() const;
    float get_width() const;

    static void set_default_size(float size);

    void scale(float ratio);


private:
    static inline float _default_size = 0.f;
    float _length;
    float _width;
};