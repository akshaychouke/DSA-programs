// Description: Print the nth fibbonacci number using DP (Memoization)
#include <iostream>
#include <vector>
using namespace std;

int Fibbo(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }

    return dp[n] = Fibbo(n - 1, dp) + Fibbo(n - 2, dp);
}
int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> dp(n + 1, -1);

    cout << Fibbo(n, dp) << endl;

    return 0;
}