#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0; // Index for first array
    int j = 0; // Index for second array
    int k = 0; // Index for third array. This is the index of next element in merged array

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
            }
        }
        
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }

}

    
void print(int ans[], int n){
    for(int i=0; i<n; i++){
        cout<< ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[5] = {12,23,34,45,56};
    int arr2[7] = {21,32,43,54,76,78,62};

    int arr3[12] = {0}; 

    merge(arr1,5, arr2, 7, arr3);
    print(arr3,12);

    return 0;
}