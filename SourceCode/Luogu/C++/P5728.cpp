#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if ( (arr[i][0] - arr[j][0] <= 5 && arr[i][0] - arr[j][0] >= -5) && (arr[i][1] - arr[j][1] <= 5 && arr[i][1] - arr[j][1] >= -5) && (arr[i][2] - arr[j][2] <= 5 && arr[i][2] - arr[j][2] >= -5) && (arr[i][0] + arr[i][1] + arr[i][2]) - (arr[j][0] + arr[j][1] + arr[j][2]) <= 10 && (arr[i][0] + arr[i][1] + arr[i][2]) - (arr[j][0] + arr[j][1] + arr[j][2]) >= -10){
                count++;
            }
        }
    }

    cout << count << endl;

}