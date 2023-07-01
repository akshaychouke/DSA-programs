// program is to reverse the array using recursion using two pointers

#include <iostream>
using namespace std;

void reverseArray(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    swap(arr[s], arr[e]);
    reverseArray(arr, s + 1, e - 1);
}
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int *arr = new int[n];

    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of the array before reversing are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, 0, n - 1);

    cout << "The elements of the array after reversing are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}