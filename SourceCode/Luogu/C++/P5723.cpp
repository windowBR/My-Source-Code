#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin >> l;
    int sum = 0;
    int count = 1;
    if(l < 2){
        cout << 0 << endl;
        return 0;
    }
    int flag;
    cout << 2 << endl;
    for (int i = 3; sum + i <= l; i++) {
        flag = 0;
        for (int j = 2; j < i; j++) {
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            continue;
        }
        sum += i;
        cout << i << endl;
        count++;
    }
    cout << count << endl;
}