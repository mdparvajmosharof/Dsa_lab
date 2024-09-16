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

    for (j = n; j >= 0; j--)
    {
        arr[j + 1] = arr[j];
    }

    int item;
    cout << "Enter a element for insertion: ";
    cin >> item;

    arr[0] = item;

    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }
    n = n + 1;
}