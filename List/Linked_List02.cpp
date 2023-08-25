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


    //Function to insert newNode at the beginning of linked list
    void push_front(int newElement)
    {
        Node *newNode = new Node();
        newNode->tempData = newElement;
        newNode->next = head;
        head = newNode;
    }

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

  //function to MERGE two list.
  void merge(LinkedList l1,LinkedList l2)
  {
   Node *next_Node,*prev_Node;
   Node *temp1,*temp2;

   int tempData;
   temp1 = l1.head;
   temp2 = l2.head;
   head = next_Node = prev_Node = NULL;

   while((temp1!=NULL) && (temp2!=NULL)){
    
      if(temp1->tempData <= temp2->tempData)
      {
         tempData = temp1->tempData;
         temp1 = temp1->next;
      }
      else
      {
         tempData = temp2->tempData;
         temp2 = temp2->next;
      }


      next_Node = new Node();
      next_Node->tempData = tempData;
      next_Node->next = NULL;

      if(head == NULL)
         head = next_Node;
      else{
         prev_Node->next = next_Node;
      }
      prev_Node = next_Node;

   }
   if(temp1 == NULL){
   
      while(temp2!=NULL)
      {
         next_Node = new Node();
         next_Node->tempData = temp2->tempData;
         next_Node->next = NULL;

         if(head == NULL)
            head = next_Node;
         else
            prev_Node->next = next_Node;

         prev_Node = next_Node;
         temp2 = temp2->next;
      }
   }
   else if(temp2 == NULL){
   
      while(temp1 != NULL){
      
         next_Node = new Node();
         next_Node->tempData = temp1->tempData;
         next_Node->next=NULL;
         if(head == NULL)
            head = next_Node;
         else
            prev_Node->next = next_Node;
         prev_Node = next_Node;
         temp1 = temp1->next;
      }
   }
  }
};

  
int main() {
  
  LinkedList MyList2;
  LinkedList MyList3;
  LinkedList MyList4;

  vector<int> v(10);
  int k;
  cout<<endl<<endl;  
  
  cout<<"Program to merge two sorted lists : -\n";
  cout<<"Enter 05 elements for List1 : \n";
  cout<<"NOTE : Enter element in incresing order to use push_back function"<<endl;

  for(int i = 0; i<5; i++){
    cout<<"Enter ele you want to insert back : ";
    cin>>v[i];
    k = v[i];
    MyList2.push_back(k);
  }
  cout<<endl<<endl; 

  cout<<"Enter 05 elements for List2 : \n";
  cout<<"NOTE : Enter element in decreasing order to use push_front function"<<endl;
  for(int i = 5; i<10; i++){
    cout<<"Enter ele you want to insert back : ";
    cin>>v[i];
    k = v[i];
    MyList3.push_front(k);
  }

  cout<<endl;
  MyList2.PrintList();

  cout<<endl<<endl;
  MyList3.PrintList();

  cout<<endl;
  MyList4.merge(MyList2,MyList3);
  MyList4.PrintList();


  return 0; 
}

