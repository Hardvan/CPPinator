#include <bits/stdc++.h>

using namespace std;

// log10 (Best Solution)
// Time: O(1)
// Space: O(1)
int count_digits3(int n)
{
    return floor(log10(n)) + 1;
}

// Convert to string and return length
// Time: O(1)
// Space: O(1)
int count_digits2(int n)
{
    string s = to_string(n);
    return s.length();
}

// Divide by 10 until n becomes 0 (Naive Solution)
// Time: O(n)
// Space: O(1)
int count_digits1(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n = 123456789;
    cout << "Number of digits in " << n << " is: " << endl;
    cout << count_digits1(n) << endl;
    cout << count_digits2(n) << endl;
    cout << count_digits3(n) << endl;
    return 0;
}
