#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, tj, ti;
    cin >> n;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j > n)
            {
                tj = n * 2 - j;
            }
            else
            {
                tj = j;
            }
            if (i > n)
            {
                ti = n * 2 - i;
            }
            else
            {
                ti = i;
            }
            s = (ti > tj) ? tj : ti;
            cout << n - s + 1 << " ";
        }
        cout << "\n";
    }
}