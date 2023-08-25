#include<iostream>
using namespace std;

int bs(int arr[],int n,int ele){    

    int mid;
    int ub =  n-1;
    int lb = 0;

    while(lb<=ub){
        mid=(lb+ub)/2;

        if(arr[mid] == ele){
            return mid;
        }
        else if(arr[mid] < ele){
            lb = mid+1;
        }
        else
            ub = mid -1;
    }
    return -1;   
}

int main(){
    int arr[]={18,23,25,34,37,44,65,73,81,87,96};

    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"enter the number : ";
    cin>>target;

    int search = bs(arr,size,target);

    if(search == -1){
        cout<<"NOT found";
    }
    else{
        cout<<"Element found at Position i = "<< search <<endl;
    }
    
    return 0;
}