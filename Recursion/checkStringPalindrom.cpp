// the program checks if a string is a palindrome or not using function recursion

#include <iostream>
using namespace std;

bool checkPali(string str, int n, int i)
{

    if (i >= n / 2)
    {
        return true;
    }

    if (str[i] != str[n - i - 1])
    {
        return false;
    }

    return checkPali(str, n, i + 1);
}
int main()
{
    string str;
    cout << "Enter the string" << endl;
    cin >> str;
    int n = str.length();
    bool ans = checkPali(str, n, 0);

    cout << "The string is " << (ans ? "a palindrome" : "not a palindrome") << endl;
    return 0;
}