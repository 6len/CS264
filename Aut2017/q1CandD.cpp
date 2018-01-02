/*(c) A C++ library maintains a list of company names and stock
prices in a binary tree data structure. The tree is made of
stock_node’s where each node has a string member called
name, a double member called price and two member
pointers, called left and right, which point to the left and
right sub-trees, respectively. Here the left sub-tree contains
stock_node’s where the stock price is less than or equal to the
stock price of the current node, with the right sub-tree contains
stock_node’s where the stock price is greater than the stock
price of the current node
Provide a C++ definition for the stock_node struct as described
above.
[4 marks]
(c) Provide a definition for a C++ function called stock_range
that take as input a stock_node and prints out the lowest and
highest stock price in the corresponding sub tree (i.e. by
traversing to the left-most and right-most nodes). The function
should have the following prototype:
void stock_range(const stock_node& root)
*/

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <valarray>
#include <vector>

using namespace std;

struct stock_node{
    string name;
    double price;
    stock_node *left;
    stock_node *right;
 };
 
 void stock_range(stock_node root){
     stock_node *temp;
     temp = &root;
     
     while(temp->left)
     {
         temp = temp->left;
     }
     cout << "The lowest price in the tree is " << temp->price << endl;
     
     temp = &root;
     while(temp->right){
         temp = temp->right;
     }
     cout << "The highest price in the tree is " << temp->price << endl;
 }
 
 
 
 int main(){
     //{} after struct initialises all values
     stock_node s1 = {};
     s1.price = 2;
     s1.name = "Glen";
     stock_node s2 = {};
     s2.price = 3;
     s2.name = "J";
     s1.right = &s2;        
     stock_node s3 = {};
     s3.price = 1;
     s3.name = "F";
     s1.left = &s3;
     stock_range(s1);
 }
