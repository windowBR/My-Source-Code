#include <iostream>
using namespace std;
int main(){
    double m;
    double h;
    cin >> m >> h;
    if (m/(h*h) < 18.5){
        cout << "Underweight" << endl;
    } else if (m/(h*h) < 24){
        cout << "Normal" << endl;
    } else{
        cout << m/(h*h) << "\n" << "Overweight" << endl;
    }
    return 0;
}