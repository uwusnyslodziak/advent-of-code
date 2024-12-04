#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define ll long long
#define pb push_back

char mas[] = {'M', 'A', 'S'};
char table[150][150];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 140;

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> table[i][j];

    int res = 0;
    for (int i=1; i<n; i++){
        for (int j=0; j<n; j++){
            if (table[i][j] == mas[1]){
                if ((table[i-1][j-1] == mas[0] && table[i+1][j+1] == mas[2]) or
                    (table[i-1][j-1] == mas[2] && table[i+1][j+1] == mas[0])){
                    if ((table[i-1][j+1] == mas[0] && table[i+1][j-1] == mas[2]) or
                        (table[i-1][j+1] == mas[2] && table[i+1][j-1] == mas[0])){
                            res++;
                    }
                }
            }
        }
    }

    cout << res;
}
