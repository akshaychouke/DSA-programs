#include <iostream>
using namespace std;

// declare a global variable
int a = 0;

void f1()
{
    // base condition
    if (a == 5)
        return;
    cout << a << endl;
    a++;  // increment the value of a
    f1(); // recursive call
}
int main()
{
    f1();
    return 0;
}