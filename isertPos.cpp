#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;

    int arr[n], i, j;
    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int pos;
    cout << "Which position you want to insert : ";
    cin>> pos;

    for (j = n; j >= pos; j--)
    {
        arr[j + 1] = arr[j];
    }

    int item;
    cout << "Enter a element for insertion: ";
    cin >> item;

    arr[pos] = item;

    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }
    n = n + 1;
}