// program to print all the subsequences of an array using recursion

#include <iostream>
#include <vector>
using namespace std;

void prinSubsequence(int arr[], int n, int i, vector<int> &ans)
{
    if (i >= n)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    // to include the current element in the subsequence - pick
    ans.push_back(arr[i]);
    prinSubsequence(arr, n, i + 1, ans);

    // to exclude the current element in the subsequence and move to the next element  - not pick
    ans.pop_back();
    prinSubsequence(arr, n, i + 1, ans);
}
int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    cout << "The subsequences of the array are: " << endl;
    prinSubsequence(arr, n, 0, ans);

    return 0;
}