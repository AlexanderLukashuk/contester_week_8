#include <iostream>
#include <cctype>

using namespace std;

int StringLength(char *str)
{
    int size;

    for (int i = 0; str[i] != '\0'; i++)
    {
        size = i + 1;
    }

    return size;
}

char *CopyString(char *s)
{
    int n = StringLength(s) + 1;
    char *new_line = new char[n];

    for (int j = 0, i = 0; j < n; j++)
    {
        if (isalpha(s[j]))
        {
            new_line[i] = s[j];
            cout << new_line[i];
            i++;
        }
    }
    cout << endl;

    return new_line;
}

int main()
{
    char line[100];

    cin >> line;

    char* new_Line = CopyString(line);
}