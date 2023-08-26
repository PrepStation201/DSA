#include<iostream>
using namespace std;
static int flag;

void selection_sort(int *a,int n){
    int temp;
    for(int i=0; i<=n-2; i++){  //outter loop (size -2)
        for(int j=i+1; j<=n-1; j++){  //outter loop (size -1)
            if(a[i]>a[j]){
                flag++;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;               
            }
        }
    }
}

int main(){

    int arr[] = {5,3,1,8,7,4,4}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    selection_sort(&arr[0],size);

    for(int k=0; k<size; k++){
       cout << arr[k] << " ";
    }

    return 0;
}