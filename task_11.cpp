#include <iostream>
#include <cstring>

using namespace std;

bool Palindrom(char* s, int size)
{
    char* ptr = s;

    for (int i = 0, j = size - 1; i <= size / 2; i++, j--)
    {
        if (*(ptr + i) == *(ptr + j))
        {
            continue;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char str[100];

    cin >> str;

    int size = strlen(str);

    if (Palindrom(str, size))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}