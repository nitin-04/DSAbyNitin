#include <iostream>
using namespace std;

bool checkPalindrome(int num)
{
    int temp = num;
    int rev = 0, remainder;
    if (num < 0)
    {
        return false;
    }
    while (num != 0)
    {
        remainder = num % 10;
        rev = (rev * 10) + remainder;
        num = num / 10;
    }
    return rev == temp;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(checkPalindrome(num)){
        cout << "The number is a palindrome";
    }
    else{
        cout << "The number is not a palindrome";
    }

    return 0;
}