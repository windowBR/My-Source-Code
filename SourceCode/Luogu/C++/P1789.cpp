#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int block[n+4][n+4];//扩大地图防越界
    for (int i = 0; i < n+4; i++) {
        for (int j = 0; j < n+4; j++) {
            block[i][j] = 0;
        }
    }
    int x,y;


    //火把
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x++;//坐标修正、下同
        y++;
        for (int j = x-2; j <= x+2; j++) {
           block[j][y] = 1; 
        }
        for (int j = y-2; j <= y+2; j++) {
            block[x][j] = 1;
        }
        block[x-1][y-1] = 1;
        block[x-1][y+1] = 1;
        block[x+1][y-1] = 1;
        block[x+1][y+1] = 1;
    }

    //萤石
    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        x++;
        y++;
        for (int j = x-2; j <= x+2; j++) {
            for (int l = y-2; l <= y+2 ; l++) {
                block[j][l] = 1;
            }
        }
    }

    int count = 0;
    //仅判断界限内
    for (int i = 2; i < n+2; i++) {
        for (int j = 2; j < n+2; j++) {
            if (block[i][j] == 0){
                count++;
            }
        }
    }
    cout << count << endl;
}