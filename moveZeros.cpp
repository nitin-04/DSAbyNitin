#include<iostream>
using namespace std;

int movesZero(int arr[], int n){
    int  i = 0;
    for(int j = 0; j<n ; j++){
        if(arr[j] != 0){
            swap(arr[j] , arr[i]);
            i++;
        }
        
    }
}



int main(){
    int array[7] = {12,34,0,67,0,45,0};
    int ans = movesZero(array, 7);

    cout<< "Output: ";
    for(int  i:array){
        cout<<i<<" ";
    }
    return 0;
}