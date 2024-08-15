#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int n);
int knapsack(vector <int> values, vector <int> weights, int w, int n);
int coinChange(vector<int> coins, int total);
int sumOfSquares(int n);

int main()
{
	cout << fibonacci(9) << endl;

	vector <int> values;
	values.push_back(5);
	values.push_back(2);
	vector <int> weights;
	weights.push_back(1);
	weights.push_back(3);
	int w = 4;
	int n = 2;
	cout << knapsack(values, weights, w, n) << endl;

	vector<int> coins;
	coins.push_back(1);
	coins.push_back(3);
	coins.push_back(5);
	int total = 11;
	cout << coinChange(coins, total) << endl;

	int a = 1000;
	cout << sumOfSquares(a) << endl;
	

	return 0;
}



int fibonacci(int n)
{
	vector <int> T;
	T.push_back(0);
	T.push_back(1);

	for (int i = 2; i <= n; i++)
	{
		T.push_back(T[i - 1] + T[i - 2]);
	}

	return T[n];
}



int knapsack(vector <int> values, vector <int> weights, int w, int n)
{
	// table size should be (values + 1) x (w + 1)
	vector <vector <int>> T(values.size() + 1, vector<int>(w + 1, INT_MIN));

	for (int i = 0; i < n + 1; i++)
		for (int j = 0; j < w + 1; j++)
		{
			if (i == 0 || j == 0)
				T[i][j] = 0;

			else if (weights[i - 1] <= w)
				T[i][j] = max(values[i - 1] + T[i - 1][w - weights[i - 1]], T[i - 1][w]);

			else
				T[i][j] = T[i - 1][w];
		}

	return T[n][w];
}



int coinChange(vector<int> coins, int total)
{
	// Table size is number of coins x sum
	vector <vector <int>> T(coins.size() + 1, vector<int>(total + 1, 0));

	for (int i = 0; i < coins.size() + 1; i++)
	{
		for (int j = 0; j <= total; j++)
		{
			if (i == 0 || j == 0)
			{
				T[i][j] = 0;
			}

			else if (coins[i - 1] <= j)
			{
				if (T[i][j - coins[i - 1]] + 1 < j)
				{
					T[i][j] = T[i][j - coins[i - 1]] + 1;
				}

				else
				{
					T[i][j] = T[i][j - 1] + 1;
				}
			}

			else
			{
				T[i][j] = T[i][j - 1];
			}
		}
	}

	return T[coins.size()][total];
}



int sumOfSquares(int n)
{
	vector<int> T;
	T.push_back(0);
	for (int i = 1; i <= n; i++)
		T.push_back((i * i) + T[i - 1]);

	return T[n];
}
