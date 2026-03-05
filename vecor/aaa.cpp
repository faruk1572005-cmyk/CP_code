#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            long long max_value = arr[i], max_index = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > max_value)
                {
                    max_value = arr[j];
                    max_index = j;
                }
            }
            if (max_index != i)
            {
                reverse(arr.begin() + i, arr.begin() + max_index + 1);
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}