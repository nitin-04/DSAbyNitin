#include<iostream>
#include<climits>
using namespace std;

// int main(){
// int arr[10] = {1,2,3,4,5,6,7,8,9,0};
// cout << arr[6]<<endl;


// char ch[5] = {'a','c','t', 'i', 'v'};  // initializing array of characters
// cout << "Characters in the array are : "<<ch<<endl;

// }


int getMax(int num[], int n){
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n){
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
} 

int main(){
    int size ;
    cout<<"size of the array: ";
    cin>> size;

    int num[100];

    for(int i = 0; i< size; i++){
        cin>> num[i];
    }

    cout<<"Maximum value is: "<< getMax(num, size)<<endl;
    cout<<"Minimum value is: "<< getMin(num, size)<<endl;
    return 0;

}

