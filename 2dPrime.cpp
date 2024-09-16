#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a){
    if(a <= 1){
        return false;
    }
    for(int i= 2; i<= sqrt(a);i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int r,c;
    cout << "Enter raw size: ";
    cin>>r;
    cout << "Enter column size: ";
    cin>>c;

    int arr[r+1][c+1], i, j;
    for(i=1;i<=r;i++){
        for(j=r;j<=c;j++){
            cout << "arr["<<i<<"]["<< j<< "]: ";
            cin>>arr[i][j];
        }
    }

    cout <<"Prime numbers in the array: ";
    for(i=1;i<=r;i++){
        for(j=r;j<=c;j++){
            if(isPrime(arr[i][j])){
                cout << arr[i][j] << " ";
            }
        }
    }


}