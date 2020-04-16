#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};


void append(Node* inputNode, int input){
    Node* TEMP = inputNode; //new Node();
    Node* NEW_NODE = new Node();
   // TEMP = inputNode;
   if (inputNode == NULL){
       inputNode = new Node();
       return;
   }
    while(1){
        if (TEMP-> next == NULL){
            NEW_NODE -> data = input;
            NEW_NODE -> next = NULL;
            TEMP -> next = NEW_NODE;
            return;
        }
        TEMP = TEMP -> next;
    }
    
}

int main(){

    Node* HEAD = new Node();
    Node* NEXT_1 = new Node();
    Node* NEXT_2 = new Node();
 
    

    HEAD->data = 10;
    HEAD->next = NEXT_1;

    NEXT_1 -> data = 20;
    NEXT_1 -> next = NEXT_2;

    NEXT_2 -> data = 30;
    NEXT_2 -> next = NULL;

    append(HEAD, 40);
    

    Node* TEMP = new Node();
    TEMP = HEAD;
    while(TEMP -> next != NULL){
        TEMP = TEMP -> next;
        cout << TEMP -> data << endl;
    }
    
}