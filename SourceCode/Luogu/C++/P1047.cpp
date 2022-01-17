#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,m;
    cin >> l >> m;
    int road[l+1],arr[m*2];
    for (int i = 0; i < l+1; i++) {
        road[i] = 1;
    }
    for (int i = 0; i < m*2; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m*2; i+=2) {
        for (int j = arr[i]; j <= arr[i+1]; j++) {
            road[j] = 0;
        }
    }
    int count = 0;
    for (int i = 0; i < l+1; i++) {
        if( road[i] == 1){
            count++;
        }
    }
    cout << count << endl;


}