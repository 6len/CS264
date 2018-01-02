/* (b) Provide a C++ based definition for a class called Rectangle that can
be used to represent the dimensions of a rectangle.
The class should provide:
(i) A parameterised constructor that takes as input two doubles for
the width and height of the rectangle.
(ii) A parameterised constructor that takes a single double as input
which initialises both the width and the height to this value i.e.
resulting in a square.
Note that your answer should include definitions for the above
methods.
[6 marks]
(c) Define an overloaded “+” operator for the Rectangle class where the
addition of two Rectangle objects corresponds to adding the widths
and heights of the individual Rectangles.
Note that the implementation of the operator should permit uses such
as:
Rectangle R1 = 5.0 + Rectangle(2.4, 3.4);
*/
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <valarray>

using namespace std;

class Rectangle {
    //protected:
public:
    //this would be protected, but public in this for the sake of testing
    double width, length;
    //--------------------

    Rectangle() {
        width = 0;
        length = 0;
    }

    Rectangle(double w, double l) {
        width = w;
        length = l;
    }

    Rectangle(double w) {
        width = w;
        length = w;
    }
    friend const Rectangle operator+(double A, const Rectangle &r);
    friend const Rectangle operator+(const Rectangle &r, const Rectangle &z);
    friend const Rectangle operator+(const Rectangle &r, double A);
};

const Rectangle operator+(double A, const Rectangle &r) {
    Rectangle rect;
    rect.width = A + r.width;
    rect.length = A + r.length;
    return rect;
}

const Rectangle operator+(const Rectangle &r, const Rectangle &z) {
    Rectangle rect;
    rect.width = r.width + z.width;
    rect.length = r.length + z.length;
    return rect;
}

const Rectangle operator+(const Rectangle &r, double A) {
    Rectangle rect;
    rect.width = A + r.width;
    rect.length = A + r.length;
    return rect;
}

int main() {
    Rectangle r1(2, 2);
    Rectangle r2(3);
    cout << r1.width << " " << r1.length << endl;
    cout << r2.width << " " << r2.length << endl;
    
    Rectangle r3 = 5+r1;
    cout << r3.width << " " << r3.length << endl;
    
    Rectangle r4 = Rectangle(5,3) + r1;
    cout << r4.width << " " << r4.length << endl;
}
