// program is to find sum of first N natural numbers -  Parameterized Recursion
#include <iostream>
using namespace std;
void printSum(int n, int sum)
{
    if (n < 1)
    {
        cout << "sum is " << sum << endl;
        return;
    }
    printSum(n - 1, sum + n);
}
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    printSum(n, 0);
    return 0;
}