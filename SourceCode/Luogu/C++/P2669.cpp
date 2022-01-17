#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    int sum = 0;
    int day = 1;
    int money = 1;
    for(int i = 0; i < k; i++){
        sum += money;
        if(day == money){
            money++;
            day = 0;
        }
        day++;
    }
    cout << sum << endl;
}