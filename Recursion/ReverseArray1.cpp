// program is to reverse the array elements using recursion
#include <iostream>
using namespace std;

void reverseArray(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray(arr, i + 1, n);
}
int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int *arr = new int[n]; // dynamic memory allocation of array of size n in heap memory of array of size n in heap memory
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of the array before reversing are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, 0, n);

    cout << "The elements of the array after reversing are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}