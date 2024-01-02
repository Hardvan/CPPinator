#include <bits/stdc++.h>

using namespace std;

// Using two pointers (Optimal Solution)
// Time: O(n)
// Space: O(1)
void reverseArray(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    // OR (more concise)
    // for (int i = 0; i < n / 2; i++)
    //     swap(arr[i], arr[n - i - 1]);
}

// Using recursion
// Time: O(n)
// Space: O(n) (Recursive stack)
void reverseArray2(int arr[], int left, int right)
{
    if (left < right)
    {
        swap(arr[left], arr[right]);
        reverseArray2(arr, left + 1, right - 1);
    }
}

// Using temporary array
// Time: O(n)
// Space: O(n) (temporary array)
void reverseArray3(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = temp[n - i - 1];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    reverseArray(arr, n);
    cout << "Reversed array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    reverseArray2(arr, 0, n - 1);
    cout << "Reversed array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    reverseArray3(arr, n);
    cout << "Reversed array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
