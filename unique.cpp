#include<iostream>
using namespace std;

int main()
{
    int a, arr[2001], size;
    bool foundUnique = false;

    cout << "Enter the size: ";
    cin >> size;

    // Taking array input from the user
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Checking for unique element
    for (int i = 0; i < size; i++) {
        a = 0;  // Reset 'a' for each element in the outer loop

        // Count occurrences of arr[i]
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                a += 1;
            }
        }

        // If arr[i] is unique (appears only once)
        if (a == 1) {
            cout << "true" << endl;
            foundUnique = true;
            break;
        }
    }

    // If no unique element was found, print "false"
    if (!foundUnique) {
        cout << "false" << endl;
    }

    return 0;
}
