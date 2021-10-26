#include <iostream>

using namespace std;

void LeftOddRightEven(int *array, int size)
{
    int* new_array = new int[size];
    int* ptr = new_array;
    int* start_ptr = ptr;

    for (int i = 1; i < size; i += 2)
    {
        *ptr = array[i];
        ptr++;
    }

    for (int i = 0; i < size; i += 2)
    {
        *ptr = array[i];
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << *(start_ptr + i) << " ";
    }
    cout << endl;
}

int main()
{
    int size;

    cin >> size;

    int *arr = new int[size];
    int *ptr = arr;

    for (int i = 0; i < size; i++)
    {
        cin >> *ptr;
        ptr++;
    }

    LeftOddRightEven(arr, size);
}