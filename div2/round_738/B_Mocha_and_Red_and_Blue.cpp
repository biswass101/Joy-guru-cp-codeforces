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
        string x; cin >> x;
        int i = 0, j = 0;
        for(int j = 0; j < x.length(); j++) {
            if(x[j] != '?') {
                if((j - i) % 2 != 0 && x[j] == 'R') {
                    while(i < j) {
                        if(x[i] == '?' or x[i] == 'R') {
                            x[i] = 'B';  
                        }
                        else if(x[i] == 'B')
                        {
                            x[i] = 'R';
                        }
                        i++;
                    }
                } else if((j - i) % 2 == 0 && x[j] == 'B') {
                    while(i < j) {
                        if(x[i] == '?' or x[i] == 'R') {
                            x[i] = 'B';  
                        }
                        else if(x[i] == 'B')
                        {
                            x[i] = 'R';
                        }
                        i++;
                    }
                }
            }
        }

        cout << x << endl;
    }
    return 0;
}