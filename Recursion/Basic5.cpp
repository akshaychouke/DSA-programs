// program is to print number from N to 1 using backtracking

#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
        return;
    printName(i + 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cout << "Enter the number of times you want to print your name: ";
    cin >> n;
    printName(1, n);
    return 0;
}