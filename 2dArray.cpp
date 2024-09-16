#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter row size : ";
    cin >> r;
    cout << "Enter column size : ";
    cin >> c;

    int arr[r + 1][c + 1], i, j, sum = 0;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "The Sumation : " << sum << endl;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                cout << "arr[" << i << "][" << j << "]: " << arr[i][j] << " is a even number" << endl;
            }
        }
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (arr[i][j] % 2 == 1)
            {
                cout << "arr[" << i << "][" << j << "]: " << arr[i][j] << " is a odd number" << endl;
            }
        }
    }
}