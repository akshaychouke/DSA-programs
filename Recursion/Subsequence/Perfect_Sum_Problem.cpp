res

// Note - This is not the optimal solution
#include <iostream>
#include <vector>
#include <vector>
using namespace std;

void Solve(int arr[], int n, int idx, int key, int sum, vector<int> &ans,int &cnt)
{
    if (idx == n)
    {
        if (sum == key)
        {
            cnt++;
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    // to take the elment in the
    ans.push_back(arr[idx]);
    sum += arr[idx];
    Solve(arr, n, idx + 1, key, sum, ans,cnt);

    // to not take the element in the ans
    ans.pop_back();
    sum -= arr[idx];
    Solve(arr, n, idx + 1, key, sum, ans,cnt);
}
int main()
{
    int arr[] = {2, 3, 5, 6, 8, 10};
    int n = 6;
    int key = 10;
    vector<int> ans;
    int cnt=0;
    Solve(arr, n, 0, key, 0, ans,cnt);
    cout<<"Total number of subsets with sum "<<key<<" is "<<cnt<<endl;
    return 0;
}