#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j < n; j++)
            cout << char('A' + j) << " ";
        cout << "\n";
    }
}