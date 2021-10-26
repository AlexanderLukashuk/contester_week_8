#include <iostream>

using namespace std;

void swap2(int *p1, int *p2)
{
    int temp;
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int number1;
    int number2;

    cin >> number1 >> number2;

    swap2(&number1, &number2);

    cout << number1 << " " << number2 << endl;
}