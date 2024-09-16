#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;

    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int item;
    cout << "Enter a element for insertion: ";
    cin >> item;

    arr[n] = item;

    for (i = 0; i <= n; i++)
    {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }
    n = n + 1;
}