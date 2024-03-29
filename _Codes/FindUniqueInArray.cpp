#include <iostream>
#include <vector>
using namespace std;

// int unique(vector<int> arr, int size)
// {
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans ^= arr[i];
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of vector :";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the elements of vector :";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Unique Element is : " << unique(arr, n);
//     return 0;
// }

int findUnique(vector<int> arr)
{
    int x = 0;
    for (int ele : arr)
    {
        x = x ^ ele;
    }
    return x;
}

int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int uniqueElement = findUnique(arr);
    cout << "Unique Element is: " << uniqueElement;
}