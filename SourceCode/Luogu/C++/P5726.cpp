#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    double sum;
    for(int i = 1; i < n-1; i++){
        sum += arr[i];
    }
    printf("%.2f",sum/(n-2));
}

