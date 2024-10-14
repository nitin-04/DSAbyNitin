#include<iostream>
using namespace std;

// Function to find the first occurrence of a given key in a sorted array
int firstoccurrence(int arr[], int n, int key){
    int start = 0;               
    int end = n - 1;             
    int mid = start + (end - start) / 2; 
    int ans = -1;                // Variable to store the result (initialized to -1 in case key is not found)

    // Binary search loop
    while(start <= end){
        if(arr[mid] == key){      // If the middle element matches the key
            ans = mid;            // Store the index in ans
            end = mid - 1;        // Move left to check if there is another occurrence earlier
        }
        else if(key > arr[mid]){  // If the key is greater than the middle element
            start = mid + 1;      // Narrow search to the right part
        }
        else {                    // If the key is smaller than the middle element
            end = mid - 1;        // Narrow search to the left part
        }

        mid = start + (end - start) / 2; // Recalculate mid after updating start or end
    }
    return ans;                   // Return the first occurrence index or -1 if not found
}

// Function to find the last occurrence of a given key in a sorted array
int lastoccurrence(int arr[], int n, int key){
    int start = 0;               
    int end = n - 1;            
    int mid = start + (end - start) / 2; 
    int ans = -1;             

    // Binary search loop
    while(start <= end){
        if(arr[mid] == key){      // If the middle element matches the key
            ans = mid;            // Store the index in ans
            start = mid + 1;      // Move right to check if there is another occurrence later
        }
        else if(key < arr[mid]){  // If the key is smaller than the middle element
            end = mid - 1;        // Narrow search to the left part
        }
        else {                    // If the key is greater than the middle element
            start = mid + 1;      // Narrow search to the right part
        }

        mid = start + (end - start) / 2; // Recalculate mid after updating start or end
    }
    return ans;                   // Return the last occurrence index or -1 if not found
}

int main(){
    // Test array with some repeated elements
    int even[8] = {11, 12, 12, 12, 12, 12, 43, 54};
    
    // Call the first occurrence function
    int anss = firstoccurrence(even, 8, 12);
    cout << "First Occurrence of 12 is at index: " << anss << endl;

    // Call the last occurrence function
    int ansss = lastoccurrence(even, 8, 12);
    cout << "Last Occurrence of 12 is at index: " << ansss << endl;

    return 0; 
}
