#include <bits/stdc++.h>

using namespace std;

// Traverse from 1 to sqrt(n) (Optimal Solution)
// If n is divisible by i, then n/i is also a divisor
// Time: O(sqrt(n))
// Space: O(1)
vector<int> divisors(int n)
{
    vector<int> result;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            result.push_back(i);
            if (i != n / i)
                result.push_back(n / i);
        }
    }

    return result;
}

// Traverse from 1 to n (Brute Force)
// Time: O(n)
// Space: O(1)
vector<int> divisors2(int n)
{
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            result.push_back(i);
    }

    return result;
}

int main()
{
    int n = 100;

    cout << "Divisors of " << n << " are: " << endl;
    vector<int> result = divisors(n);
    for (auto i : result)
        cout << i << " ";
    cout << endl;

    cout << "Divisors of " << n << " are: " << endl;
    result = divisors2(n);
    for (auto i : result)
        cout << i << " ";
    cout << endl;

    return 0;
}
