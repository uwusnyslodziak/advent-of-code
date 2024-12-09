#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    int n = s.size();
    vector<ll> disk;
    const ll dot = -1;
    ll id = 0;
    for (ll i=0; i<n; i++){
        if (i%2 == 0){
            for (int j=0; j<s[i]-'0'; j++){
                disk.pb(id);
            }
            id++;
        }
        else {
            for (int j=0; j<s[i]-'0'; j++){
                disk.pb(dot);
            }
        }
    }

    int a = 0, b = disk.size()-1;
    while (a < b){
        if (disk[a] != -1){
            a++;
        }
        else {
            if (disk[b] == -1){
                b--;
            }
            else {
                swap(disk[a], disk[b]);
            }
        }
    }
    cout << a << " " << b << endl;

    ll res = 0, curr = 0;
    while (disk[curr] != -1){
        res += curr*disk[curr];
        curr++;
    }

    for (auto u: disk) cout << u << " "; cout << endl;

    cout << res;
}

