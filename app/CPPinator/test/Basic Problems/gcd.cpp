#include <bits/stdc++.h>

using namespace std;

// Euclidean Algorithm (Optimal Solution)
// Time: O(log(min(a, b))), where base of log is 1.61
// Space: O(1)
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Traverse from min(a, b) to 1 (Brute Force)
// Time: O(min(a, b))
// Space: O(1)
int gcd2(int a, int b)
{
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 1;
}

int main()
{
    int a = 12, b = 15;

    cout << "GCD of " << a << " and " << b << " is: " << endl;
    cout << gcd(a, b) << endl;
    cout << gcd2(a, b) << endl;
    cout << "Expected: 3\n";

    return 0;
}
