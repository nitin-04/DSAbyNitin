#include<iostream>
using namespace std;

int bubble(int arr[], int size){
    // for round 1 to size of the array
    for(int i=0; i<=size; i++){
        for(int j = 0; j < size-1; j++){

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