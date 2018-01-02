/* Write a function in C++ that takes as input a pointer to an array or
integers and an integer specifying the length of the array. The function
should return a pointer to a newly created array that is twice the length
of the input array, where the first half of the array contains a copy of
the input array and the second half contains a reversed copy of the
array.
For example if the input to the function was a pointer to the following
array
1 2 3 4
Then the output should be a point to the following an array with the
following contents
1 2 3 4 4 3 2 1
The function should have the following prototype:
int *copy_and_reverse(int *array, int length)
*/


#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <valarray>

using namespace std;

int *copy_and_reverse(int *array, int length){
    int newlen = length*2;
    int *cr = new int [newlen];
    for(int i = 0; i<length; i++){
        cr[i] = array[i];
        cr[newlen-1-i] = array[i];
    }
    return cr;
}

int main(){
    int len;
    cout << "Please enter the arrays length" << endl;
    cin >> len;
    int *array = new int [len];
    cout << "Enter the arrays values";
    for(int i = 0; i<len ; i++){
        cin >> array[i];
    }
    int *revcopy = copy_and_reverse(array,len);
    
    for(int j = 0; j<(len*2); j++){
        cout << revcopy[j] << " ";
    }
    
}
