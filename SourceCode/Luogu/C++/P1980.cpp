#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int count = 0;
    int a;
    for (int i = 1; i <= n; i++) {
        a = i;
        while (a > 0){
            if(a % 10 == x){
                count++;
            }
            a /= 10;
        }
    }
    cout << count << endl;
}