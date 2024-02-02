#include <iostream>
using namespace std;
void binsearch(int arr[], int n, int x)
{
    int i = 0, j = n - 1;
    int m = (i + j) / 2;
    while (i < j)
    {
        m = (i + j) / 2;
        if (arr[m] == x)
        {
            cout << "found \n";
            return;
        }
        if (arr[m] < x)
        {
            i = m + 1;
        }
        if (arr[m] > x)
        {
            j = m - 1;
        }
    }
    if (i == j)
    {
        if (arr[i] == x)
        {
            cout << " found \n";
        }
        else
        {
            cout << "not found \n";
        }
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    binsearch(arr, n, x);
    return 0;
}