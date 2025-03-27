#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while(t--) {
    int n, x; cin >> n >> x;
    vector<int> v(n); for(auto &x : v) cin >> x;
    sort(v.begin(), v.end(), greater<int>());
    // for(auto &x : v) cout  << x << " ";
    // cout << endl;
    int ans = 0;
    int cnt = 1;
    for(int i = 0; i < v.size(); i++) {
        
        if(v[i] * cnt >= x) {
            ans++;
            cnt = 1;
        }
        else cnt++;
    }

    cout << ans << endl;
  }
  return 0;
}