#include<iostream>
using namespace std;

int linearSearch(int *arr,int n,int ele){
    for(int i = 0;i<n;i++){
        if(arr[i]==ele){
            return (i);
        }
    }
    return -1;
}


int main(){
    int arr[] = {43,78,23,78,34,89,34,9,34,18};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Enter the element to be searched : ";
    cin>>target;
  
    int search = linearSearch(arr,size,target);

    if(search == -1){
        cout<<"NOT found";
    }
    else{
        cout<<"Element found at Position i = "<< search << endl;

    }
    return 0;
}

/* Time Complexities
    Best Case : O(1) -->  key might be present at the first index.
    Worst Case : O(N) --> key might be present at the last index.
*/
