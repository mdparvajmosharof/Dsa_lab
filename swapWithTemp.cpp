#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter array size : ";
    cin >> n;

    int arr[n],i;
    for(i=0; i<n ;i++){
        cout<<"arr["<< i<<"]: ";
        cin>>arr[i];

    }

    int temp;
    temp = arr[4];
    arr[4] = arr[2];
    arr[2] = temp;

    cout<< "After Swap";

    for(i=0; i<n ;i++){
        cout<<"arr["<< i<<"]: "<<arr[i] <<endl;

    }
}