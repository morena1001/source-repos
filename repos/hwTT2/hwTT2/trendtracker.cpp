// Josue Flores
// CSCI 3333-03

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cassert>
#include "trendtracker.h"

using namespace std;


Trendtracker::Trendtracker(string filename)
{
	ifstream f;
	string line;
	Entry a;

	f.open(filename);
	assert(f.is_open());
	while (getline(f, line))
	{
		a.hashtag = line;
		a.pop = 0;
		E.push_back(a);
	}

	if (size() < 3)
		for (int i = 0; i < size(); i++)
			S.push_back(i);

	else
		for (int i = 0; i < 3; i++)
			S.push_back(i);

	f.close();
}



int Trendtracker::size()
{
	return E.size();
}



void Trendtracker::tweeted(string ht)
{
	int tweetNum = search(ht);

	if (tweetNum != -1)
	{
		E[tweetNum].pop++;

		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == tweetNum)
			{
				if (i > 0)
				{
					int hold = i;
					while (E[S[i]].pop > E[S[i - 1]].pop)
					{
						swap(S[i], S[i - 1]);
						if (hold > 1)
							hold--;
					}
				}

				return;
			}
		}


		if (popularity(ht) > E[S.back()].pop)
		{
			S.push_back(tweetNum);

			int hold = S.size() - 1;
			while (E[S[hold]].pop > E[S[hold - 1]].pop)
			{
				swap(S[hold], S[hold - 1]);
				if (hold > 1)
					--hold;
			}

			if (S.size() > 3)
				S.pop_back();
		}
	}
}



int Trendtracker::popularity(string name)
{
	int popNum = search(name);

	if (popNum == -1)
		return -1;

	else
		return E[popNum].pop;
}



string Trendtracker::top_trend()
{
	if (size() == 0)
		return "";

	else
		return E[S[0]].hashtag;
}



void Trendtracker::top_three_trends(vector<string>& T)
{
	T.clear();

	if (size() < 3)
		for (int i = 0; i < size(); i++)
			T.push_back(E[S[i]].hashtag);

	else
		for (int i = 0; i < 3; i++)
			T.push_back(E[S[i]].hashtag);
}



int Trendtracker::search(string ht)
{
	int l = 0;
	int r = size();
	int m = (r + l) / 2;


	while (l <= r)
	{
		if (ht < E[m].hashtag)
		{
			r = m - 1;
			m = (r + l) / 2;
		}

		else if (ht > E[m].hashtag)
		{
			l = m + 1;
			m = (r + l) / 2;
		}

		if (ht == E[m].hashtag)
			return m;
	}

	return -1;
}