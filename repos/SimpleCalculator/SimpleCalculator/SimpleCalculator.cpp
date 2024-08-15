// Calculator has 4 functions: add, subtract, multiply, and divide
// Has the ability to do math with more than 2 numbers

#include <iostream>
#include <string>

using namespace std;

double solution(string full);

int main()
{
    double answer;
    double num;
    string sign;
    string full;

    string title = "CALCULATOR APP";

    cout << title << endl << endl << "Input your math problem:" << endl;
    getline(cin, full);
    answer = solution(full);

    return 0;
}

double solution(string full)
{
    double numbers[20];
    string sign;



    return 1 + 5;
}