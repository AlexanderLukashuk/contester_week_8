#include <iostream>

using namespace std;

void idk(int arr[1000], int size)
{
    int *a;
    int sum = 0;
    int max = 0;
    int index_max_element;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            index_max_element = i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        a = &arr[i];
        if (*a > 0)
        {
            if (i == index_max_element)
            {
                cout << sum << endl;
                break;
            }
            sum += arr[i];
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