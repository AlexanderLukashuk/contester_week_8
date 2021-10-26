#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void NewLine(char *start_line, int size)
{
    char new_line[100];

    int j = 0;
    int temp_index = 0;
    while (temp_index < size)
    {
        if (isalpha(*start_line))
        {
            new_line[j] = *start_line;
            start_line++;
            j++;
            temp_index++;
        }
        else
        {
            start_line++;
            temp_index++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << new_line[i];
    }
    cout << endl;
}

int main()
{
    char line[100];
    int size;

    cin >> line;

    size = strlen(line);

    NewLine(&line[0], size);
}