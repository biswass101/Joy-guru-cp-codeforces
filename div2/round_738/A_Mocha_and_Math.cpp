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
        int x;
        cin >> x;
        while (n > 1)
        {
            int y;
            cin >> y;
            x &= y;
            n--;
        }

        cout << x << endl;
    }
    return 0;
}