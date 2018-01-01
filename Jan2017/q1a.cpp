/*) Write a function in C++ that takes as input a positive integer n
and returns as output an array of integers of length n, where the
array is populated by the sequence 0..n-1. */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int *change(int in){
    int *a = new int[in];
    for(int i = 0; i<in; i++){
        a[i] = i;
    }
    return a;
}


int main()
{
  int in;
  cin >> in;
  int *ar = change(in);
  for(int i = 0 ; i<in ; i++){
      cout << *(ar+i);
  }
}
