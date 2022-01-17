#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,x,h;
    cin >> w >> x >> h;
    int cube[w][x][h];
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < h; k++) {
                cube[i][j][k] = 1;
            }
        }
    }

    int times;
    cin >> times;
    int arr[times][6];
    for (int i = 0; i < times; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < times; i++) {
        for (int j = arr[i][0] - 1; j <= arr[i][3] - 1; j++) {
            for (int k = arr[i][1] - 1; k <= arr[i][4] - 1; k++) {
                for (int l = arr[i][2] - 1; l <= arr[i][5] - 1; l++) {
                    cube[j][k][l] = 0;
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < h; k++) {
                if (cube[i][j][k] == 1){
                    count++;
                }
            }
        }
    }

    cout << count << endl;

}