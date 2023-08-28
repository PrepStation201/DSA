// impplementation of stack using vector
#include<bits/stdc++.h>
using namespace std;

vector<int> v(100);    
int n = v.size();        
int top = -1;

// push function
void push(int val) {
   if(top>=n-1)
      cout << "Overflow" << endl;
   else {
      top++;
      v[top]=val;
   }
}

// pop function
void pop() {
   if(top<=-1)
      cout << "Underflow" << endl;
   else {
      cout<<"The popped element is "<< v[top] <<endl;
      top--;
   }
}

// display function
void display() {
   if(top>=0) {
      cout<<"Elements of stack are:\n";
      for(int i=top; i>=0; i--)
      cout<<v[i]<<"\n";
      cout<<endl;
   } 
   else
      cout<<"Stack is empty";
}

// function to find topmost element
int topElement(){
    if(top<=-1){
        cout << "Stack is Empty" << endl;
        return -1;
    }
    else{
        return v[top];
    }
}

// function to check wheather the stack is empty or not
bool isEmpty(){
    if(top<=-1){
        return true;
    }
    else{
        return false;
    }
}

int main(){  

    push(4);
    push(5);
    push(6);
    push(1);
    push(8);
    pop();
    pop();
    push(2);

    display();

    cout << "topmost element of the stack is : " << topElement() << endl;   
    cout<<"\nTo check wheather the stack empty or not (true = 1 && false = 0) : "<< isEmpty() <<endl;

    return 0;
}

