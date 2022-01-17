#include<bits/stdc++.h>
using namespace std;

string n0[5] = { "XXX", "X.X", "X.X", "X.X", "XXX"};
string n1[5] = { "..X", "..X", "..X", "..X", "..X"};
string n2[5] = { "XXX", "..X", "XXX", "X..", "XXX"};
string n3[5] = { "XXX", "..X", "XXX", "..X", "XXX"};
string n4[5] = { "X.X", "X.X", "XXX", "..X", "..X"};
string n5[5] = { "XXX", "X..", "XXX", "..X", "XXX"};
string n6[5] = { "XXX", "X..", "XXX", "X.X", "XXX"};
string n7[5] = { "XXX", "..X", "..X", "..X", "..X"};
string n8[5] = { "XXX", "X.X", "XXX", "X.X", "XXX"};
string n9[5] = { "XXX", "X.X", "XXX", "..X", "XXX"};


int main(){
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            switch (arr[j]) {
                case '0':
                    cout << n0[i];
                    break;
                case '1':
                    cout << n1[i];
                    break;
                case '2':
                    cout << n2[i];
                    break;
                case '3':
                    cout << n3[i];
                    break;
                case '4':
                    cout << n4[i];
                    break;
                case '5':
                    cout << n5[i];
                    break;
                case '6':
                    cout << n6[i];
                    break;
                case '7':
                    cout << n7[i];
                    break;
                case '8':
                    cout << n8[i];
                    break;
                case '9':
                    cout << n9[i];
            }
            if (j == n-1){
                cout << endl;
                break;
            }
            cout << '.';

        }
    }
    return 0;


}