#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n == 0){
        cout << 0 << endl;
        return 0;
    }
    if (n < 0){
        cout << "-";
        n = -n;
    }
    int flag = 0;
    while(n != 0){
        if(flag == 0 && n%10 == 0){
            n /= 10;
            continue;
        }
        cout << n%10;
        flag = 1;
        n /= 10;
    }
}