// Description: Factorial of a number using parameterized recursion
#include <iostream>
using namespace std;

void factorial(int i, int ans)
{
    if (i <= 1)
    {
        cout << "The factorial of is: " << ans << endl;
        return;
    }
    factorial(i - 1, ans * i);
}

int main()
{

    int n;
    cout << "Enter the number to find the factorial: " << endl;
    cin >> n;

    factorial(n, 1);
    return 0;
}