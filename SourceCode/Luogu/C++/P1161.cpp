#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double b[n*2];
    for (int i = 0; i < n*2; i++) {
        cin >> b[i];
    }


    int t =0;
    for (int i = 1; i < n*2; i+=2) {
        t += (int)b[i];
    }
    int a[t];

    int c = 0;
    for (int i = 0; i < n*2; i+=2) {
        for (int j = 1; j <= b[i+1]; j++) {
            a[c] = (int)(b[i] * j);
            c++;
        }
    }

    sort(a,a+t);
    int count = 1;
    for (int i = 1; i < t; i++) {
        //奇偶判断，奇数个输出
        if (a[i] == a[i-1]){
            count++;
        } else if(count % 2 != 0){
            cout << a[i-1];
            return 0;
        } else{
            count = 1;
        }
    }

    //若找不到奇数个号，则在最末尾
    cout << a[t-1] << endl;

}