#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long
#define pb push_back

const int maxn = 130;
int table[maxn][maxn];
int px, py;

int curr_move = 0;
pair<int,int> moves[] = {
    { -1, 0 },
    { 0, 1 },
    { 1, 0 },
    { 0, -1 }};

enum status { Blocked, Free, End };

status next_square(){
    int nx = px+moves[curr_move].first;
    int ny = py+moves[curr_move].second;
    
    if (nx < 0 || nx >= maxn || ny < 0 || ny >= maxn) return End;
    if (table[nx][ny] == 1) return Blocked;
    return Free;
}

void move(){
    table[px][py] = 2;
    px += moves[curr_move].first;
    py += moves[curr_move].second;
}
void rotate(){
    curr_move = (curr_move+1)%4;
}
int calculate(){
    int res = 0;
    for (int i=0; i<maxn; i++){
        for (int j=0; j<maxn; j++){
            if (table[i][j] == 0) cout << '.';
            if (table[i][j] == 1) cout << '#';
            if (table[i][j] == 2){
                cout << 'x';
                res++;
            }
        }
        cout << endl;
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i=0; i<maxn; i++){
        for (int j=0; j<maxn; j++){
            char c; cin >> c;
            if (c == '#') table[i][j] = 1;
            if (c == '^') px = i, py = j;
        }
    }
    cout << px << " " << py << endl;

    bool running = true;
    while (running){
        int curr_status = next_square();
        switch (curr_status){
            case Blocked:
                rotate();
                break;
            case Free:
                move();
                break;
            case End:
                running = false;
                break;
        }
        cout << curr_status << "\n";
    }
    cout << calculate();

}

