#include <iostream>
#include <vector>

using namespace std;

int fibRec(int n);
int fibDyn(int n);

int main()
{
	cout << fibRec(1000) << endl;
	//cout << fibDyn(1000) << endl;


	return 0;
}

int fibRec(int n)
{
	if (n <= 1)
		return n;
	else
		return fibRec(n - 1) + fibRec(n - 2);
}

int fibDyn(int n)
{
	vector<int> f;
		
	f.push_back(0);
	f.push_back(1); 

	for (int i = 2; i <= n; i++)
	{
		f.push_back(f[i - 1] + f[i - 2]);
	}

	return f[n];
}