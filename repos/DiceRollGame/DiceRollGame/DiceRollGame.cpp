// Josue Flores

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "What is your first roll: ";
    int num1;
    cin >> num1;

    cout << endl << "What is your second roll: ";
    int num2;
    cin >> num2;

    cout << endl << "What are your next three rolls: ";
    int num3, num4, num5;
    cin >> num3 >> num4 >> num5;

    int loopsum = num3 + num4 + num5;

    int sum = 0;
    for (num1; num1 < loopsum; num1 += num2);
    {
        sum += num1;
    }
    cout << sum;
}

