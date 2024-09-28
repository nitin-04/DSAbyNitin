#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the number of elements in array: ";
    cin>> size;
    int arr[size];
    for (int i = 0; i<size; i++){
        cout << "Enter the array: ";
        cin >> arr[i];
    
    }
    cout<<"The entered array is : ";
    for(int j = 0; j< size; j++){
        cout <<arr[j]<< " ";
    }

    return 0;
}

// int main() {
//     int size;
//     cout << "Enter the number of elements in array: ";
//     cin >> size;

//     int arr[size];

//     // Input loop
//     for (int i = 0; i < size; i++) {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     // Output loop
//     cout << "The entered array is: ";
//     for (int j = 0; j < size; j++) {
//         cout << arr[j] << " ";
//     }

//     return 0;
// }













