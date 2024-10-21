#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(9);
    double n = 3.141592653 , X;
    float R;
    cin >> R;

    X = n* R*R;
    cout << X << endl;
}