#include <iostream>
using namespace std;

char maxOccuringChar(string str)
{
    int arr[26] = {0}; // Array to count frequency of each letter

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // Convert uppercase characters to lowercase
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32; // 'A' becomes 'a', 'B' becomes 'b', etc.
        }

        // Now only deal with lowercase letters
        if (ch >= 'a' && ch <= 'z')
        {
            int index = ch - 'a'; // Get index for the character
            arr[index]++; // Increment the frequency for this character
        }
    }

    int maxi = -1, ans = 0;

    // Find the character with the maximum frequency
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i; // Store the index of the maximum frequency character
            maxi = arr[i]; // Update the maximum frequency
        }
    }

    // Convert the index back to the corresponding character
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string str = "test";

    cout << "The most frequent character is: " << maxOccuringChar(str) << endl;

    return 0;
}
