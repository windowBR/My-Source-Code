#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
    cin >> arr[0];

    if (arr[0] == 1){
        cout << 1 << endl;
        return 0;
    }
    int last;
    for(int i = 0; true; i++){
        if (arr[i] % 2 == 0){
            arr[i+1] = arr[i] / 2;
        } else{
            arr[i+1] = arr[i] * 3 + 1;
        }

        if (arr[i+1] == 1){
            last = i+1;
            break;
        }
    }

    for (int i = last; i >= 0; i--){
        cout << arr[i] << " ";
    }
}