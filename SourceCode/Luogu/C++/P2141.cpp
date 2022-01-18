#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n],a[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        a[i] = arr[i];
    }

    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j; k < n; k++) {
                if (arr[i] + arr[j] == arr[k]){
                    a[k] = 0;
                    break;
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0){
            count++;
        }
    }

    cout << count << endl;
}