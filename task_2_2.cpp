#include <iostream>

using namespace std;

void checker(long int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *arr << " ";
        arr++;
    }
    cout << endl;
}

int main()
{
    int n;
    long int arr[1000];
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    checker(arr, n);
}