#include<iostream>
using namespace std;

int rotatedArray(int arr[], int size){
    
    int temp[size];
    int k = 3; // number of elements to rotate by. 
    for(int i = 0; i < size; i++){
        temp[(k + i) % size] = arr[i];
    }
    for(int i = 0; i<size; i++){
        arr[i] = temp[i];
    }
    
}

int main(){
    int arr[] = {12,23,32,345,5436,76,3474,65458,584,42,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    rotatedArray(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}