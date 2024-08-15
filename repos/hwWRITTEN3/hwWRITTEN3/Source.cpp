#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double medium(vector<double>& A, vector<double>& B)
{	
	double medianA = A[A.size() / 2];
	double medianB = B[B.size() / 2];

	// Base case
	if (medianA == medianB)
	{
		return (medianA + medianB) / 2;
	}
	
	// Recursive cases
	if (medianA < medianB)
	{
		A.erase(A.begin(), A.begin() + (A.size() / 2));
		B.erase(B.begin() + (B.size() / 2), B.end());
		return medium(A, B);
	}

	else if (medianA > medianB)
	{
		B.erase(B.begin(), B.begin() + (B.size() / 2));
		A.erase(A.begin() + (A.size() / 2), A.end());
		return medium(A, B);
	}
}

int main()
{
	vector<double> A;
	vector<double> B;

	A.push_back(1);
	A.push_back(5);
	A.push_back(7);
	A.push_back(7);
	A.push_back(8);
	A.push_back(9);
	A.push_back(9);

	B.push_back(2);
	B.push_back(4);
	B.push_back(4);
	B.push_back(4);
	B.push_back(7);
	B.push_back(7);
	B.push_back(10);

	cout << medium(A, B) << endl;



	return 0;
}