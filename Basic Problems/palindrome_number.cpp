#include <bits/stdc++.h>

using namespace std;

// Reverse the number & compare with original number
// Time: O(n)
// Space: O(1)
bool palindrome(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        temp /= 10;
        rev = rev * 10 + digit;
    }

    return rev == n;
}

int main()
{
    int n = 12321;
    cout << n << " is palindrome: " << palindrome(n) << endl;
    return 0;
}
