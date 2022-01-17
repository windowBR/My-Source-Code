#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[12];
    for(int i = 0; i < 12; i++){
        cin >> arr[i];
    }

    int cash = 0;
    int money = 0;
    for(int i = 0; i < 12; i++){
        cash += 300;
        if(cash - arr[i] >= 100){
            money = money + ((cash - arr[i])/100)*100;
            cash -= ((cash - arr[i])/100)*100;
        }
        if( cash - arr[i] < 0){
            cout << "-" << i+1 << endl;
            return 0;
        }
        cash -= arr[i];
    }
    double finalMoney = (double)cash + (double)money * 1.2;
    cout << finalMoney << endl;

}