/*
QUESTION
Provide a C++ definition of an abstract base class called
Container that defines the interface for a set of derived
classes each of which provide a facility for storing a collection of
doubles. Each derived class will provide a different underlying
container for storing the doubles (e.g. array, vector, etc.).
The base class should have a single string member variable
called datastruct_ that stores a string describing the type of
container (e.g. “array”, “linked list”, etc.). The base class should
provide a single constructor that takes a string as input, which it
uses to set the datastruct_ member variable. Each derived
class will be required to set this member variable via the base
class constructor.
The base class should also provide a pure virtual get method
which takes as input an integer parameter, index, and a
reference to double called data. The method should return a
bool as output. The purpose of this method is to provide a
uniform method for accessing the elements within the container
where the concrete method returns the corresponding double,
via the data input reference parameter, at the location specified
by index. The method should return true if the location is valid
(i.e. index is not out-of-bounds), and should return false
otherwise without altering the contents data.
Finally the base class should provide a virtual destructor.
[10 marks]
(b) Provide a definition of a FixedArray class which is derived
from the Container class defined in Question 2 (a). The class
should have three member variables:
(i) a pointer, data_, to an array of doubles for holding the data,
(ii) an integer, size_, which stores the total size (i.e. number of
doubles) of the array pointed to by data_, and,
(iii) an integer, length_, which stores the current number of data
items stored in the array.
The class should provide a constructor that takes an integer,
size, as input that specifies the size of the array. The
constructor should (i) set the datastruct_ member of the base
class to “FixedArray”, and (ii) initialise data_, size_, and
length_ as appropriate.
The class should also provide an implementation of the get
method as specified in the base class, and a destructor. Note
that you do not have to provide a method for inserting data.
*/


#include <iostream>
#include <cstring>

using namespace std;

class Container{
    public:
    Container(string d){
        datastruct_ = d;
    }
    virtual ~Container(){}
    
    virtual bool get(int index, double *data){
         if(data[index] != NULL){
        return true;
         }
         return false;
    }
    
    protected:
     string datastruct_;
};

class FixedArray:public Container{
    public:
    FixedArray(int size):Container("FixedArray")
    {
        size_ = size;
        double darray[size];
        data_=darray;
        length_ = 0;
    }
    virtual ~FixedArray(){}
    
     virtual bool get(int index, double *data){
         if(data[index] != NULL){
        return true;
         }
         return false;
    }
    
    protected:
        double *data_;
        int size_;
        int length_;
};

int main(){
    
}
    
