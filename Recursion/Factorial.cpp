// program is to find the factorial of a number - in functional recursion

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{

    int n;
    cout << "Enter the number to find the factorial: ";
    cin >> n;
    cout << "The factorial of "
         << " is: " << factorial(n);
    return 0;
}