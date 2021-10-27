#include <iostream>

using namespace std;

void CountEvenBetweenMaxMin(int *arr, int size)
{
    int *ptr = arr;
    int max = 0;
    int min = 100;
    int max_index;
    int min_index;
    int even_count = 0;

    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
            max_index = i;
        }

        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
            min_index = i;
        }
    }

    for (int i = min_index + 1; i < max_index; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            even_count++;
        }
    }

    cout << even_count << endl;
}

int main()
{
    int size;

    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    CountEvenBetweenMaxMin(arr, size);
}