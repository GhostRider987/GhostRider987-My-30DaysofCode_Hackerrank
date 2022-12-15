#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bitset<32> a(n);
    int arr[32] = {0};
    int j = 0;

    for (int i = 0; i < 32; i++)
    {
        if (a[i] == true)
        {
            arr[j]++;
        }
        else
        {
            j++;
        }
    }
    sort(arr, arr + 32);
    cout << arr[31];
    return 0;
}
