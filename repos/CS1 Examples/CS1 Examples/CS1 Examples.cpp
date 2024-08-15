#include <iostream> //Necessary to be able to use std I/O (cin, cout)

using namespace std;

int main()
{
	int total, count;
	double avg;
	cout << "Enter total and count: ";
	cin >> total >> count;
	avg = 1.f / 2.f * total / count;
	cout << "Half average: " << avg << endl;
	return 0; //Successful completion
}