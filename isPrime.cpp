#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if (n<= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0){
            return false;
        }
    }
    return true;

    
    
}

int main(){
    int n;
    cout << "Enter array Size : ";
    cin>>n;

    int arr[n], i;
    for(i=1; i<= n; i++){
        cout << "arr["<< i<< "]: ";
        cin>> arr[i];
    }

    for(i=1; i<=n ; i++){
        if(isPrime(arr[i])){
            cout<< "arr["<< i <<"]: "<< arr[i] << " is a prime numeber"<< endl;
        }
    }
}