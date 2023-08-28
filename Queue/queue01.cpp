// implementation of queue using class
#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int val);
    void dequeue(void);
    int sizeOfQueue(void);
    bool isEmpty(void);
    int frontElement(void);
    int rearElement(void);
    void display(void);
};


void Queue::display(){
    if(((rear == -1) && (front == -1)) || (front>size) ){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "\nElements of Queue : " << endl;
        for(int i = front; i<=rear; i++){
            cout << arr[i] << " ";
        }
    }
}
void Queue::enqueue(int val){
    if((rear == -1) && (front == -1)){
        front++;
        rear++;
        arr[rear] = val;
    }
    else if(rear>=size){
        cout<<"Cannot push element";
    }
    else{
        rear++;
        arr[rear] = val;
    }
}

void Queue::dequeue(void){
    if((rear == -1) && (front == -1)){
        cout<<"Cannot pop element";
    }
    else{
        front++;
    }
}


int Queue::sizeOfQueue(void){
    int size = rear - front +1;
}


int Queue::frontElement(void){
    if(front == -1 || front>size){
        return -1;
    }
    else{
        return arr[front];
    }
}

int Queue::rearElement(void){
    if(rear == -1){
        return -1;
    }
    else{
        return arr[rear];
    }
}

bool Queue::isEmpty(void){
    if((rear == -1) && (front == -1)){
        return true;
    }
    else if(front>size){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    Queue q(10);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(40);
    q.enqueue(30);
    q.enqueue(80);
    q.enqueue(50);
    q.dequeue();

    q.display();
    cout << endl << endl;

    cout << "Front element : " << q.frontElement() << endl;
    cout << "Rear element : " << q.rearElement() << endl;
    cout << "Size of queue : " << q.sizeOfQueue() << endl;
    cout << "Is queue empty : " << q.isEmpty() << endl;

    return 0;
}
