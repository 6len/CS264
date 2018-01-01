/*A given C++ library maintains a list of customer names in a
linked list data structure. The list is made of customers_nodes
where each customer_node stores a customer’s name and a
pointer to the next customer_node in the list.
Provide a definition of a C++ struct for the customer_node type
in described above.
Provide definitions for a C++ function called find_customer
which takes as input a pointer to the first customer_node in the
list and a customer name for which to search. The function
should traverse the list, searching for the presence of a
customer_node containing the specified name. The function
should return true if it finds a node containing the search name
or should return false otherwise. The function should have the
prototype :
[9 marks]
bool find_customer(customer_node *head, string name);
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/* -------------Part of Question -------------------*/
struct customer_node{
    string name;
    customer_node *next;
};

bool find_customer_node(customer_node *head, string name)
{
   customer_node *temp;
   temp = head;
   while(temp->next != NULL){
        temp=temp->next;
        if(temp->name == name){
            return true;
        }
    }
    return false;
}
/*----------------------------------------------------*/
/*The following is me testing if it works*/
void insert_name(customer_node &head, string name)
{
	head.name = name;  // inserts the specified name
	head.next = NULL; // makes sure it is not pointing to anything yet
}

customer_node *create_list(string name)
{
	customer_node *x = new customer_node; // creates a new customer_node
	insert_name(*x,name); // creates a link out of the customer_node
	return x; // returns the link

}



int main(){
    customer_node *head;
    customer_node *trav;
    customer_node *temp;
    head = NULL;
    string name;
    for(int i = 0; i<3 ; i++)
    {
       cin >> name; // Takes name in
       trav = create_list(name); //Creates a customer link
            if(head == NULL) // checks if the list is empty
		{
                    head = trav; // if the list is empty we need to make the new link the head
		}
            else
		{
                    temp = head; // if the list is not empty we traverse the list until we find the last slot
                    while(temp->next != NULL) // checks if we are at the last slot
                        {
                        temp = temp->next; // traverses the list 1 by 1
                        }
                    temp->next = trav; //if we are at the last slot, create a new link as the final link
		}
	}

    
    
    string check;
    cin >> check;
    
    bool x = find_customer_node(head,check);
    cout << (x ? "TRUE" : "FALSE");
    
}

