#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> m;
    for (auto i : arr)
    {
        m[i]++;
    }
    return 0;
}