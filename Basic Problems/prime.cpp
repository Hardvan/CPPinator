#include <bits/stdc++.h>

using namespace std;

// Traverse from 2 to sqrt(n) (Optimal Solution)
// Time: O(sqrt(n))
// Space: O(1)
bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Traverse from 2 to n-1 (Brute Force)
// Time: O(n)
// Space: O(1)
bool isPrime2(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n = 100;

    cout << n << " is " << (isPrime(n) ? "prime" : "not prime") << endl;
    cout << n << " is " << (isPrime2(n) ? "prime" : "not prime") << endl;

    return 0;
}
