#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Stack{

    public:
        int *arr;
        int top;
        int size;

        // constructor
        Stack(int size){
            this -> size = size;
            arr = new int[size];
            top = -1;
        }
        
        void push(int val);
        void pop(void);
        int topElement(void);
        bool isEmpty(void);
        int sizeOfStack(void);
        void display(void);
};

int Stack::sizeOfStack(void){
    return(top+1);
}

void Stack::display(void){
    int temp = top;
    cout << "Elements of the Stack " << endl;
    while(temp>=0){
        cout << arr[temp] << endl;
        temp--;
    }
}

void Stack::push(int val){
    if(size - top >1){
    top++;
    arr[top] = val;   
    }
    else{
        cout <<  "Stack overflow" << endl;
    }
}

void Stack::pop(void){
    if(top<0){
        cout <<  "Stack underflow" << endl;
    }
    else{
        top--;
    }
}

int Stack::topElement(void){
    if(top>=0){
        return arr[top];
    }
    else{
        return -1;
    }
}

bool Stack::isEmpty(void){
    if(top<0){
        return true;
    }
    else{
        return false;
    }
}


int main(){

    Stack st(10);

    st.push(22);
    st.push(43);
    st.push(14);
    st.push(18);
    st.push(20);
    st.push(12);

    st.display();
    cout << endl << endl;

    cout <<  "TopMost Element in stack :" << st.topElement() << endl;
    
    st.pop();
    cout <<  "TopMost Element in stack :" << st.topElement() << endl;

    st.pop();
    cout <<  "TopMost Element in stack :" << st.topElement() << endl;

    
    cout << "Size of stack : " << st.sizeOfStack() << endl;
    cout << "Is Stack empty : " << st.isEmpty() << endl;
    






    return 0;
}