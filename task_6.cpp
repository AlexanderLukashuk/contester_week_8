#include <iostream>

using namespace std;

void LeftOddRightEven(int *array, int size)
{
    int* ptr = array;

    /*int *odd_ptr = array;
    int *start_ptr = odd_ptr;

    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
        }
    }*/

    /*for (int i = 1; i < size; ++i)
    {
        for (int r = size - i; r > 0; r--)
        {
            if ((array[r] % 2 == 0) && (array[r] < array[r - 1]))
            {
                int temp = array[r];
                array[r] = array[r - 1];
                array[r - 1] = temp;
            }
        }
    }*/
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