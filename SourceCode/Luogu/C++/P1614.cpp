#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = 999999999;
    if ( n == m){
        min = 0;
        for (int i = 0; i < n; i++) {
            min += arr[i];
        }
        cout << min <<endl;
        return 0;
    }
    
    int a;
    for (int i = 0; i < n-m; i++) {
        a = arr[i];
        for (int j = 1; j < m; j++) {
            a += arr[i+j];
        }
        if (a < min){
            min = a;
        }
    }

    cout << min << endl;
}
