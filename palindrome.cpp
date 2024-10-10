#include <iostream>
using namespace std;

char tolowercase(char mnm)
{
    // Check if the character is already lowercase ('a' to 'z')
    if (mnm >= 'a' && mnm <= 'z')
    {
        // If it's already lowercase, return it as is
        return mnm;
    }
    else
    {
        // Convert uppercase letter to lowercase
        // Subtract 'A' from the character to get its offset from 'A', then add 'a' to get the corresponding lowercase letter
        char temp = mnm - 'A' + 'a';
        return temp; // Return the converted lowercase character
    }
}


bool check_palindrome(char a[], int n)
{
    int st = 0;
    int ed = n - 1;

    // Compare characters from start and end
    while (st < ed)
    {
        if (tolowercase(a[st]) != tolowercase(a[ed])) // first convert to lowercase then compare
        {
            return false; // Not a palindrome
        }
        st++;
        ed--;
    }
    return true; // Is a palindrome
}

// Function to reverse the string (optional, not required for palindrome check)
void reverseString(char contain[], int m)
{
    int s = 0;
    int e = m - 1;

    while (s < e)
    {
        swap(contain[s], contain[e]);
        s++;
        e--;
    }
}

// Function to get the length of the string
int getLength(char contain[])
{
    int count = 0;
    while (contain[count] != '\0')
    { // Traverse until null terminator
        count++;
    }
    return count;
}

int main()
{
    char contain[20];
    cout << "Enter the string that you want to check for Palindrome: ";
    cin >> contain;

    // Get the length of the input string
    int len = getLength(contain);

    // Check if the string is a palindrome
    if (check_palindrome(contain, len))
    {
        cout << contain << " is a Palindrome" << endl;
    }
    else
    {
        cout << contain << " is not a Palindrome" << endl;
    }

    cout << "Character is" << tolowercase('a') << endl;
    cout << "Character is" << tolowercase('B');

    return 0;
}
