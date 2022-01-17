#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int last;
    for (int i = 0; true; i++) {
        cin >> arr[i];
        if(arr[i] == 0){
            last = i - 1;
            break;
        }
    }

    for (int i = last; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}