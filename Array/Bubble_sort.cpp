// C++ program for implementatio of Bubble sort
#include <bits/stdc++.h>
using namespace std;

void bubble_Sort(int arr[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++){   //outter loop (size - 1)
		for (j = 0; j < n - i - 1; j++){  //inner loop (size -i -1)
			if (arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size){
    cout << "Elements of array: \n";
	int i;
	for (i = 0; i < size; i++){
		cout << arr[i] << " ";
    }
	cout << endl;
}


int main(){
	int arr[] = { 7, 1, 5, 2, 6, 8, 3};
	int size = sizeof(arr) / sizeof(arr[0]);

	bubble_Sort(arr, size);
	printArray(arr, size);

	return 0;
}
