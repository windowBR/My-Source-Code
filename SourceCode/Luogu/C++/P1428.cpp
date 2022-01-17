#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i; i < n; i++){
        cin >> arr[i];
    }

    int count = 0;
    cout << 0 << " ";
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if(arr[j] < arr[i]){
                count++;
            }
        }
        cout << count << " ";
        count = 0;
    }
}