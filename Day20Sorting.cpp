#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, numswap = 0;
    cin >> n;

    vector<int> a(n);

    for (int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
    }

    // Write your code here
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                numswap++;
            }
        }
    }

    cout << "Array is sorted in " << numswap << " swaps. " << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;
    return 0;
}
