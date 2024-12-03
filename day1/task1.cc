#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define ll long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1000;
    vector<int> uwu, owo;
    while (n--){
        int a, b; cin >> a >> b;
        uwu.pb(a); owo.pb(b);
    }
    sort(all(uwu)); sort(all(owo));

    ll res = 0;
    for (int i=0; i<1000; i++){
        res += abs(uwu[i]-owo[i]);
    }

    cout << res << "\n";

}
