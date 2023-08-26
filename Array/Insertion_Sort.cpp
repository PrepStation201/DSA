#include<iostream>  
using namespace std;  

void insertion_sort(int *arr,int n){
    //Sorting process via insertion sort
    for(int k=1; k<n; k++){  
        int temp = arr[k];  
        int j= k-1;  
        while(j>=0 && temp <= arr[j]){
            arr[j+1] = arr[j];   
            j--;  
        }  
        arr[j+1] = temp;  
    }
}

int main (){

    int arr[10] = { 12,4,3,1,15,45,33,21,10,2};   
    int size = sizeof(arr)/sizeof(arr[0]);   

    // calling funtion insertionSort
    insertion_sort(arr,size);

    cout<< "\nSorted list is " << endl;
    for(int i=0; i<size; i++){  
        cout << arr[i] <<" ";  
    }  
    
    return 0;
}