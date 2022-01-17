#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    for (int i = m; i <= n; i++) {
        for (int a = i,b ; a > 0; a/=10) {
            b = a%10;
            arr[b]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}