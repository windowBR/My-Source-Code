#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if( n == 0){
        cout << "0.00" << endl;
        return 0;
    }
    if( n == 1 || n == 2){
        cout << "1.00" << endl;
        return 0;
    }
    if (n == 3){
        cout << "2.00" << endl;
        return 0;
    }
    long long a;
    long long b = 1;
    long long c = 2;
    for (int i = 3; i < n; i++) {
        a = b;
        b = c;
        c = a+b;
    }
    cout << c <<".00" << endl;
    return 0;
}