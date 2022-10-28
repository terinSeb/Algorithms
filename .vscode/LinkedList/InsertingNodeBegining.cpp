#include <iostream>
using namespace std;
 
 
struct Node
{
    int data;
    Node* link;
};
// Driver Code



int main()
{
     Node* A;   
    A = NULL;

    Node* temp = new Node();
    temp -> data = 2;
    temp -> link = NULL;
     cout <<"OutPut1: " ;
    cout << A;cout <<" " ;
     cout <<"OutPut2: " ;
    cout << temp;cout <<" " ;
     cout <<"OutPut3: " ;
     cout << temp -> data ;
     A = temp;

    return 0;
}