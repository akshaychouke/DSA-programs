// program is to print the name N times

#include <iostream>
using namespace std;

void printName(int n, int i)
{
    if (i > n)
        return;
    cout << "Akshay" << endl;
    printName(n, i + 1);
}
int main()
{
    int n;
    cout << "Enter the number of times you want to print your name: ";
    cin >> n;
    printName(n, 1);
    return 0;
}