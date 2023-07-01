// program is to find sum of first N natural numbers -  functional Recursion
#include <iostream>
using namespace std;

int printSum(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n + printSum(n - 1); // functional recursion
}
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    cout << "The sum is " << printSum(n);
    return 0;
}