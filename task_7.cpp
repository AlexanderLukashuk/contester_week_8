#include <iostream>

using namespace std;

void idk(int arr[1000], int n)
{
    int *a;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        a = &arr[i];
        if (*a == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == 0)
                {
                    cout << sum << endl;
                    break;
                }
                sum += arr[j];
            }
        }
    }
}

int main()
{
    int arr[1000];
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    idk(arr, n);
}