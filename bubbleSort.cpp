#include<iostream>
using namespace std;

int bubble(int arr[], int size){
    // for round 1 to size of the array
    for(int i=0; i<=size; i++){
        for(int j = 0; j < size-i; j++){
    // j<size because  we are comparing current element with next one. and when j becomes last element of the array, so there is no j+1.
    // size - i because after every round j is decrease by 1,2 ...
            if (arr[j]  > arr[j+1]){
                //  swap elements if the current element is greater than next
                swap(arr[j], arr[j+1]); 
            
            }
        }
    }
}

int main(){
    int array[6] = {10, 25, 35, 2, 15, 7}; 
    int series = bubble(array, 6);

    cout<<"The Sorted Array: ";
    for(int i=0; i < 6; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}