#include <iostream>
#include <string.h>
using namespace std;

void reverseString(char arr[])
{
    int s = 0;
    int e = strlen(arr) - 1;
    while (s < e)
        swap(arr[s++], arr[e--]);
}
int main()
{
    char arr[30];
    cout << "Enter the string : ";
    cin.getline(arr, 30);
    cout << "String is : " << arr << endl;
    reverseString(arr);
    cout << "Reverse of String is : " << arr << endl;
}