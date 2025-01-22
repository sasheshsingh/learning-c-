#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}