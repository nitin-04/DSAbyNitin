#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    cout<<"Enter the size of the array: ";
    cin>>size;

    for(int i = 0; i< size; i++){
        cout<<"enter the elements in an arary: "<< i + 1 <<" ";
        cin>>arr[i];
    }

    int ans = 0;
    for(int i = 0; i < size;i++){
        ans = ans^arr[i];

    }

    for(int i = 1; i<size; i++ ){
        ans = ans ^i;
    }
    return ans;
    
}

// int main (){    
//     int ans = 0;
//     for (int i = 0; i< ; i++)

// }