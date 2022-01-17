#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int count = 1;
    for (int i = 1; i <= n; i++) {
        printf("%02d",count);
        count++;
        if (n == 1){
            break;
        } else if(i == n){
            printf("\n");
            i = 0;
            n--;
            continue;
        }
    }
    return 0;

}