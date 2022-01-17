#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    if (n <= 2){
        cout << 1 << endl;
        return 0;
    }
    double sum = 0;
    double swin = 2;
    int count = 0;
    while(sum < n) {
        sum += swin;
        swin *= 0.98;
        count++;
    }
    cout << count << endl;
}