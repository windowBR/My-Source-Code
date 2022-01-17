#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    cin >> k;
    int sum1, sum2, count1 = 0, count2 = 0;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0){
            sum1 += i;
            count1++;
        }else{
            sum2 += i;
            count2++;
        }
    }
    double a = (double)sum1 / (double)count1;
    double b = (double)sum2 / (double)count2;
    printf ("%.1f ", double (a));
    printf ("%.1f" , double (b));
}