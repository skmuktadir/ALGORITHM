#include <iostream>
using namespace std;

void solve(int arr[], int size)
{
    int ans = 0;
    for (int i = 1; i < size; i++)
    {
        ans = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[ans] == arr[j])
            {
                cout << size - ans << endl;
                return;
            }
        }
    }
}
int main()
{
    int t, n;

    cin >> t;

    while (t > 0)
    {
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        solve(array, n);
        t--;
    }
    return 0;
}