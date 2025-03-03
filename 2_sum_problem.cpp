#include <bits/stdc++.h>
using namespace std;
void two_sum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Yes, Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                return;
            }
        }
    }
    cout << "No such pair is exist" << endl;
}
int main()
{
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target sum:" << endl;
    cin >> target;
    two_sum(arr, n, target);

    return 0;
}




