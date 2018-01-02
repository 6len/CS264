 /*Write a C++ function that takes as input a c-string and returns
the length of that string. The function should have the following
prototype:
int my_string_len(char *s);*/

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <valarray>
#include <vector>

using namespace std;

int my_string_len(char *s){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

int main() {
    char *p = new char [100];
    cin >> p;
    cout << my_string_len(p);
}

