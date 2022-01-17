#include <iostream>
using namespace std;
int main(){
    double k;
    cin >> k;
    double sum = 0;
    int n;
    for (int i = 1; sum < k; i++) {
        sum += 1/(double)i;
        n = i;
        if (k == sum){
            cout << n+1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}