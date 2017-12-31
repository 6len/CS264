/*
QUESTION
(b) Provide a C++ based definition for a class called MyComplex
that can be used to represent a complex number.
The class should provide:
(i) A parameterised constructor that takes as input two
doubles for the real and imaginary part of the complex
number.
(ii) A parameterised constructor that takes a single double as
input which initialises the real part of the complex number.
The imaginary part of the complex number should be set
to zero in this instance.
(iii)A copy constructor.
Note that your answer should include definitions for the above
methods.
[9 marks]
(c) Define an overloaded “+” operator for MyComplex objects. The
defined operator should permit the following usage:
MyComplex C1(5.0,4.5), C2(3.0, 1.5);
MyComplex C3 = C1 + C2;
MyComplex C4 = C1 + 4;
MyComplex C5 = 5 + C1;
You should include code that needs to be defined both within
and outside of the MyComplex class.
*/
#include <iostream>
#include <cstring>

using namespace std;


    
class MyComplex{
    public:
    MyComplex(){
        real = 0;
        image = 0;
    }
    MyComplex(double A){
        real = A;
        image = 0;
    }
    MyComplex(double A, double B){
        real = A;
        image = B;
    }
    void copy(const MyComplex &m)
    {
        real = m.real;
        image = m.image;
    }
    friend const MyComplex operator+(double A, const MyComplex &m);
    friend const MyComplex operator+(const MyComplex&c, const MyComplex &m);
    friend const MyComplex operator+(const MyComplex &m, double A);
    
    double real, image;
};
const MyComplex operator+(double A, const MyComplex &m)
    {
        MyComplex complex;
        complex.real = A + m.real;
        complex.image = m.image;
        return complex;
    }
   const MyComplex operator+(const MyComplex &c, const MyComplex &m)
    {
        MyComplex complex;
        complex.real = c.real + m.real;
        complex.image = c.image + m.image;
        return complex;
    }
    const MyComplex operator+(const MyComplex& m, double A)
    {
        MyComplex complex;
        complex.real = A + m.real;
        complex.image = m.image;
        return complex;
    }


int main(){
    MyComplex comp;
    MyComplex comp2(1);
    MyComplex comp3(1,2);
    comp.copy(comp2);
    cout << comp2.real << endl;
    
   MyComplex c1 = 5.0+comp;
   cout << c1.real << " " << c1.image << endl;
   
   MyComplex c2 = c1+c1;
   cout << c2.real << " " << c2.image << endl;
   
   MyComplex c3 = c2+5;
   cout << c3.real << " " << c3.image << endl;
}
