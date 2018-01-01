/* The C++ code below provides a class definition for a 2D Vector
class that is to be used by a linear algebra library.
class Vector{
public:
Vector(int x, int y): x_(x), y_(y) {};
Vector(int n): x_(n), y_(n) {};
protected:
int x_, y_;
}
Demonstrate how C++ templates can be used to convert the
above class to a generic implementation i.e. where the internal
type used to represent the vector components is set by a
template parameter.
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

template <class T>
class Vector{
    public: 
        Vector(const T& x, const T& y){
            x_ = x;
            y_ = y;
        }
        Vector(const T& n){
            x_ = n;
            y_ = n;
        }
        
    protected:
        T x_,y_;
};

int main(){
    Vector <int> myvec(1,5);
    Vector <int> myvectwo(4);
}
