#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            num = 1;
        else
            num = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            if (num)
                num = 0;
            else
                num = 1;
        }
        cout << "\n";
    }
}