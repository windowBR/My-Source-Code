#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    int arr[99999],a = 0;

    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                arr[a] = i + j + k;
                a++;
            }
        }
    }

    sort(arr,arr+a);
    int count = 1;
    int maxCount = 0;
    int maxSum;
    for (int i = 0; i < a+1; i++) {
        if ( arr[i] == arr[i-1]){
            count++;
            if (count > maxCount){
                maxCount = count;
                maxSum = arr[i];
            }
        } else{
            count = 1;
        }
    }

    cout << maxSum << endl;

}