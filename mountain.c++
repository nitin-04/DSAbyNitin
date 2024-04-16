#include<iostream>
using namespace std;

int mountainsort(int arr[], int size){
    int start = 0 ;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start < end){
        if (arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start ;


}

int main(){
    int even[10] = {24,69,100,110,79,78,67,36,26,19};
    int ans = mountainsort(even, 10);

    cout<<ans<<endl;
    return 0;
}