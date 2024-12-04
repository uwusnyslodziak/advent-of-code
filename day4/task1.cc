#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define ll long long
#define pb push_back

char xmas[] = {'X', 'M', 'A', 'S'};
char table[150][150];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 140;

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> table[i][j];

    int res = 0;
    bool check;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            check = true;
            for (int c=0; c<4; c++)
                if (table[i+3-c][j+c] != xmas[c])
                    check = false;
            if (check) res++;

            check = true;
            for (int c=0; c<4; c++)
                if (table[i+c][j+3-c] != xmas[c])
                    check = false;
            if (check) res++;

            check = true;
            for (int c=0; c<4; c++)
                if (table[i+c][j] != xmas[c])
                    check = false;
            if (check) res++;

            check = true;
            for (int c=0; c<4; c++)
                if (table[i+c][j+c] != xmas[c])
                    check = false;
            if (check) res++;

            check = true;
            for (int c=0; c<4; c++)
                if (table[i][j+c] != xmas[c])
                    check = false;
            if (check) res++;

            check = true;
            for (int c=0; c<4; c++)
                if (table[i+c][j] != xmas[3-c])
                    check = false;
            if (check) res++;
            
            check = true;
            for (int c=0; c<4; c++)
                if (table[i+c][j+c] != xmas[3-c])
                    check = false;
            if (check) res++;
            
            check = true;
            for (int c=0; c<4; c++)
                if (table[i][j+c] != xmas[3-c])
                    check = false;
            if (check) res++;
        }
    }

    cout << res;
}
