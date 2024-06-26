#include "Rectangle.h"

#include <iostream>

int main() {
    Rectangle square(2.f);
    std::cout << "{ L: " << square.get_length() << ", W: " << square.get_width() << " }" << std::endl;

    square.scale(3);
    std::cout << "{ L: " << square.get_length() << ", W: " << square.get_width() << " }" << std::endl;

    /* some instruction saying that next squares's size will be 3.f */

    Rectangle::set_default_size(2.f);
    Rectangle s1;
    Rectangle s2;

    /* some instruction saying that next squares's size will now be 5.f */

    Rectangle::set_default_size(7.f);
    Rectangle s3;
    Rectangle s4;
    Rectangle s5;

    // At this point, size of s1 and s2 should be 3.f, and size of s3, s4 and s5 should be 5.f. 


    return 0;
}
