#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n+1][7];
    for (int i = 0; i < n+1; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> arr[i][j];
        }
    }

    int count = 0;
    int price[7] = { 0, 0, 0, 0, 0, 0, 0,};
    //第几张
    for (int i = 1; i < n+1; i++) {
        //第几号
        for (int j = 0; j < 7; j++) {
            //跟哪个比
            for (int k = 0; k < 7; k++) {
                if (arr[i][j] == arr[0][k]){
                    count++;
                }
            }
        }
        switch (count) {
            case 0:
                break;
            case 1:
                price[6]++;
                break;
            case 2:
                price[5]++;
                break;
            case 3:
                price[4]++;
                break;
            case 4:
                price[3]++;
                break;
            case 5:
                price[2]++;
                break;
            case 6:
                price[1]++;
                break;
            case 7:
                price[0]++;
                break;
        }
        count = 0;
    }

    for (int i = 0; i < 7; i++) {
        cout << price[i] << " ";
    }
    return 0;
}