#include<iostream>
using namespace std;

// Function to move all the zeros to the end of the array while maintaining the order of non-zero elements.
int movesZero(int arr[], int n){
    int i = 0;  // Pointer to track the position where the next non-zero element will be placed.

    // Iterate through the array using another pointer 'j'.
    for(int j = 0; j < n; j++){
        // If the current element is non-zero, swap it with the element at index 'i'.
        if(arr[j] != 0){
            swap(arr[j], arr[i]);  // Swap non-zero element at 'j' with the element at 'i'.
            i++;  // Move the pointer 'i' to the next position.
        }
    }
    // No need to return anything as the changes are made directly to the input array.
}

int main(){
    int array[7] = {12, 34, 0, 67, 0, 45, 0};  // Define an array with 7 elements.
    
    movesZero(array, 7);  // Call the function to move all zeros to the end.

    cout << "Output: ";  // Output header for clarity.
    
    // Range-based for loop to print the modified array.
    for(int i : array){
        cout << i << " ";  // Print each element followed by a space.
    }
    
    return 0;  // Return 0 to indicate successful execution.
}
