/*Given an array arr[] of non-negative integers and an integer sum, the task is to count all subsets of the given array with a sum equal to a given sum.

Note: Answer can be very large, so, output answer modulo 109+7

Example 1:

Input: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
       sum = 10
Output: 3
Explanation: {2, 3, 5}, {2, 8}, {10}
*/

// Note - This is not the optimal solution but this is trick to solve the problem

#include <iostream>
using namespace std;

int Solve(int arr[], int n, int idx, int key, int sum)
{
    if (idx == n)
    {
        // if the sum is equal to the key then return 1
        if (sum == key)
        {
            return 1;
        }
        return 0;
    }
    // to take the elment in the
    sum += arr[idx];
    int l = Solve(arr, n, idx + 1, key, sum);

    // to not take the element in the ans;
    sum -= arr[idx];
    int r = Solve(arr, n, idx + 1, key, sum);

    return l + r;
}

int main()
{

    int arr[] = {2, 3, 5, 6, 8, 10};
    int n = 6;
    int key = 10;
    int res = Solve(arr, n, 0, key, 0);
    cout << "Total number of subsets with sum " << key << " is " << res << endl;
    return 0;
}