#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 1;
    int maxCount = 1;
    for(int i = 0; i < n-1; i++){
        if (arr[i] + 1 == arr[i+1]){
            count++;
            if(count > maxCount){
                maxCount = count;
            }
        }else{
            count = 1;
        }
    }
    cout << maxCount << endl;
}