// Program to find minimum element in stack in O(1)
#include<bits/stdc++.h>
#include<vector>
#define n 100
using namespace std;
int m = INT_MAX;


class Stack{

    int stack[n];
    int top;

    int arrMin[n];
    int top1 = -1;   
    
    public:
    Stack(){   //constructor
        top=-1; 
    }

    // push function
    void push(int val) {  
        if(top>=n){
            cout << "Overflow" << endl;
        } 
        else{
            if(m>=val){
                top1++;
                arrMin[top1] = val;
                m = val;
            }
            top++;
            stack[top]=val;
        }            
    }

    // pop function
    int pop() {
        if(top<=-1){
            cout << "Underflow" << endl;
            return -1;
        }
        else {
            if(m == stack[top]){
                top1--;
                m = arrMin[top1];
            }            
            top--;        
        }
        return stack[top];
    }

    // display function
    void display() {

        if(top>=0) {
            cout<<"\nElements of stack are:\n";
            for(int i=top; i>=0; i--)
            cout<<stack[i]<<"\n";
            cout<<endl;
        } 
        else
            cout<<"Stack is empty";
    }
    
   
    // function to return minimum element of stack
    int minElement(){
        return m;
    }

};

int main(){  
    Stack s1;

    s1.push(4); 
    s1.push(5);
    s1.push(6);
    s1.push(1);
    s1.push(8);
    cout<<"The popped element is "<< s1.pop();
    cout<<"The popped element is "<< s1.pop();   
    s1.push(2);

    s1.display();

    cout<<"Minimum element in the stack is "<< s1.minElement() <<endl;


    string s="({[]}";
    validPalindrome(s);
    return 0;
}

