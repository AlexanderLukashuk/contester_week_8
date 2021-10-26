#include <iostream>

using namespace std;

void Numbers(int* p, int size)
{
    while (size > 0)
    {
        cout << *p << " ";
        p++;
        size--;
    }
    cout << endl;
}

int main()
{
    int* ptr;
    int* start = ptr;
    int n;

    cin >> n;

    int i = n;
    while (i > 0)
    {
        cin >> *ptr;
        ptr++;
        i--;
    }
    ptr = start;

    Numbers(ptr, n);
}