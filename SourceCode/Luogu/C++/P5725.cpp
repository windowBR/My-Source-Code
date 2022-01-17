#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;

    //输出矩形
    for(int i = 1; i <= n*n; i++){
        printf("%02d",i);
        count++;
        if(count == n){
            cout << endl;
            count = 0;
        }
    }
    cout << endl;
    //输出三角形
    int a = 1;
    int flag = 1;
    for(int i = 1;a <= n;i++){
        if(flag == 1){
            for(int j = 0; j < n-a; j++){
                cout << "  " ;
                flag = 0;
            }
        }
        printf("%02d",i);
        count++;
        if(count == a){
            cout << endl;
            count = 0;
            a++;
            flag = 1;
        }
    }
}