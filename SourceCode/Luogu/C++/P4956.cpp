#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n /= 364;
    for(int i = 1; true ;i++){
        if( n - 3*i <= 100){
            n = n - 3*i;
            cout << n << "\n" << i << endl;
            return 0;
        }
    }
}