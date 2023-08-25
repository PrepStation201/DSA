#include<bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int tempData;
    Node* next;
};

class LinkedList {
  private:
    Node* head;
    
  public:
    LinkedList(){
      head = NULL;      
    }

    // Function 01
    //Function to insert newNode at the beginning of linked list
    void push_front(int newElement)
    {
        Node *newNode = new Node();
        newNode->tempData = newElement;
        newNode->next = head;
        head = newNode;
    }

    // Function 02
    //function to display the linked list elements.
    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"The list contains: ";
        while(temp != NULL) {
          cout<< temp->tempData <<"->";
          temp = temp->next;
        }
        cout<<"NULL"<<endl;
      } 
      else {
        cout<<"The list is empty.\n" << endl;
      }
    } 

    // Function 03
    // Insertion of newNode at a Given Position:
    void insertAt(int pos,int contain){
        int i = -1;
        Node* temp = head;
        Node* prev = NULL;

        while(temp != NULL) {
            i++;
            if(pos == i){
                Node* newNode = new Node();
                newNode->tempData = contain;
                newNode->next = NULL;
                prev->next = newNode;
                newNode->next = temp;
                return;
            }
            prev = temp;
            temp = temp->next;
            
        }
        return;
    }

    // Function 04
    //function to insert a new node at the end of the linked list.
    void push_back(int newElement) {
      Node* newNode = new Node();
      newNode->tempData = newElement;
      newNode->next = NULL; 
      if(head == NULL) {
        head = newNode;
      } 
      else {
        Node* temp = head;
        while(temp->next != NULL){
          temp = temp->next;
        }
        temp->next = newNode;
      }    
    }

    // Function 05
    //Function to search for a specific element in th LL
    int search_element(int element){
        Node* temp = head;
        int i = -1;
        while(temp != NULL) {
            i++;
            if(temp->tempData == element){
                return i;
            }
            temp = temp->next;
        }
        cout<<"Enter element not found.";
        return -1;
    }

    // Function 06
    // function to delete a particular node with a given value
    bool deleteNode(int element){
        Node* temp = head;
        Node* prev = NULL;
        while(temp != NULL) {
            if(temp->tempData == element){
                cout<<"Entered Element is deleted....";
                prev->next = temp->next; 
                temp->next = NULL;
                delete temp;
                return true;
            }
            prev = temp;
            temp = temp->next;
        }
        cout<<"Entered Element does NOT found....";
        return false;
    }

    // Function 07
    // Function to get length of linked list
    int getLength(){
        Node* temp = head;
        int size = 0;
        while(temp != NULL) {
            size++;
            temp = temp->next;
        }
        return size;

    }

    // Function 08
    // to reverse the LL
    void reverseLL(){

      Node* temp1 = NULL;
      Node* temp2 = head;
      Node* temp3 = NULL;

      while(temp2 != NULL){
        temp3 = temp2->next;
        temp2 ->next = temp1;
        temp1 = temp2;
        temp2 = temp3;
      }
      head=temp1;
    }

    // Function 09
    // Removing Duplicates:
    void removeDuplicates(int num){
      Node* temp = head;
      Node *temp1 = temp->next;

      while(temp->next != NULL){

        if(temp->tempData == num){
          temp->next = NULL;
          head = temp1;
          temp = head;
          temp1 = temp->next;
          continue;
        }

        if(temp1->tempData == num){
          temp->next = temp1->next;
          temp1->next = NULL;
          temp1 = temp->next;
          continue;
        }
        temp = temp1;
        temp1 = temp1->next;
      }

    }

};

int main() {
  LinkedList MyList;

  vector<int> v(10);
  int k;

  for(int i = 0; i<5; i++){
    cout<<"Enter ele you want to insert back : ";
    cin>>v[i];
    k = v[i];
    MyList.push_back(k);
  }

  for(int i = 5; i<10; i++){
    cout<<"Enter ele you want to insert front : ";
    cin>>v[i];
    k = v[i];
    MyList.push_front(k);
  }

 
  cout<<endl<<endl;
  MyList.PrintList();

  int num;
  cout<<"\nEnter the element you want to search : ";
  cin>>num;
  cout<<"Index of serached element : "<< MyList.search_element(num)<<endl;

  cout<<"\nEnter position and Data that you want to insert in the list : \n";
  int pos,tempData;
  cin>>pos>>tempData;
  MyList.insertAt(pos,tempData);
  MyList.PrintList();

  int num2;
  cout<<"\n\nEnter the element you want to delete : ";
  cin>>num2;
  MyList.deleteNode(num2);
  cout<<endl;
  MyList.PrintList();

  cout<<endl;
  cout<<endl<<"Size of the list : "<<(MyList.getLength());
  cout<<endl;

  cout<<"\n\nReverse List is:\n";
  MyList.reverseLL();
  MyList.PrintList();

  cout<<endl;
  MyList.removeDuplicates(6);
  MyList.PrintList();

  return 0;
}
