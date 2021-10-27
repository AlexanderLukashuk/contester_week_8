#include <iostream>
#include <cstring>

using namespace std;

bool compare(char* s1, int size1, char* s2, int size2)
{
    char* str_ptr1 = s1;
    char* str_ptr2 = s2;

    if (size1 == size2)
    {
        for (int i = 0; i < size1; i++)
        {
            if (*(str_ptr1) == *(str_ptr2))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }

    return true;
}

int main()
{
    char str1[100];
    char str2[100];

    cin >> str1;
    cin >> str2;

    int size1 = strlen(str1);
    int size2 = strlen(str2);

    if (compare(str1, size1, str2, size2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}