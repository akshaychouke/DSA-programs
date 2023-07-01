// program is to print number from 1 to N using backtracking

#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i < 1)
        return;
    printName(i - 1, n); // recursive call
    cout << i << endl;   // this statement will be executed after above all the recursive calls are done
}
int main()
{
    int n;
    cout << "Enter the number of times you want to print your name: ";
    cin >> n;
    printName(n, n);
    return 0;
}