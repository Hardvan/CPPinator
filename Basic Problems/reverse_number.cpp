#include <bits/stdc++.h>

using namespace std;

// Simple for loop
// Time: O(n)
// Space: O(1)
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        n /= 10;
        rev = rev * 10 + digit;
    }

    return rev;
}

int main()
{
    int n = 123456789;
    cout << "Reverse of " << n << " is: " << reverse(n) << endl;
    return 0;
}
