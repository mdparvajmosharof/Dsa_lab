#include<iostream>
using namespace std;
int main(){
    int n;

    cout<< "How many elements : ";
    cin>> n;

    int arr[n], i, j, sum;

    for(i=1;i<=n;i++){
        cout<< "arr["<< i << "]:";
        cin >> arr[i];
    }

    //sumation
    for(j=1; j<= n; j++){
        sum += arr[j];
    }

    cout << "The sumation : " << sum << endl;

    // Even Number

    for(j=1; j<= n; j++){
        if(arr[j] % 2 == 0){
            cout<< "Even number:- arr[" << j << "] : " << arr[j] << endl;
        }
    }

    //Odd Number

    for(j=1; j<= n; j++){
        if(arr[j] % 2 == 1){
            cout<< "Odd number:- arr[" << j << "] : " << arr[j] << endl;
        }
    }

    
}