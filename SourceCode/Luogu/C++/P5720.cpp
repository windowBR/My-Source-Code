#include <iostream>
using namespace std;
int main(){
    int a;
    int count = 0;
    cin >> a;
    while (true){
        if (a == 1){
            cout << 1 << endl;
            return 0;
        }
        a /= 2;
        count++;
        if (a == 1){
            break;
        }
    }
    cout << count+1 << endl;
    return 0;
}