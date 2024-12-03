#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define ll long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1000;
    vector<int> uwu;
    map<int,int> owo;
    while (n--){
        int a, b; cin >> a >> b;
        uwu.pb(a);
        if (owo.count(b)) owo[b]++;
        else owo.insert({b,1});
    }

    ll res = 0;
    for (auto u: uwu){
        cout << u << " " << owo[u] << "\n";
        res += u*owo[u];
    }

    cout << res << "\n";
}
