/*Provide a C++ definition for a function that takes a zero
terminated c-string as input and returns a reversed version of
that string as output. The function should have the following
prototype:
char *reverse(const char str[]);
*/

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <valarray>

using namespace std;

char *reverse(const char str[]){
    char *rev = new char[100];
    for(int i = 0; i<strlen(str) ; i++)
    {
        rev[i] = str[strlen(str)-1-i];
    }
    rev[strlen(str)] = '\0';
    return rev;
}

int main(){
    char c [100];
    cin >> c;
    char *revc = reverse(c);
    cout << revc;
}
