// program is to print the nth fibonacci number using recursion -
// here we are using concept of recursion known as recursive call stack
#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << "The nth fibonacci number is " << endl;
    cout << fibo(n) << endl;

    return 0;
}