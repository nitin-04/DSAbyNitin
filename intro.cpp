#include <iostream>
using namespace std;

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; i <= name[i] != '\0'; i++)
    {
        count++;
    }
    return count;   
}

int main()
{

    char name[10];
    cout << "Enter Yo0ur name: " << endl;
    cin >> name;

    cout << "Your name is: ";
    cout << name << endl;

    cout << "length is: " << getlength(name);
    // cout << count << endl;
    return 0;
}