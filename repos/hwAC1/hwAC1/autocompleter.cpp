// Josue Flores
// CSCI 3333-03

#include <iostream>
#include <string>
#include <vector>
#include "autocompleter.h"

using namespace std;

Autocompleter::Autocompleter()
{
	root = nullptr;
}



void Autocompleter::insert(string x, int freq)
{
	Entry e;
	e.s = x;
	e.freq = freq;

	insert_recurse(e, root);
}



int Autocompleter::size()
{
	return size_recurse(root);
}



void Autocompleter::completions(string x, vector<string>& T)
{
	T.clear();
	vector<Entry> topThree;

	completions_recurse(x, root, topThree);


	vector<Entry> temp;
	int hold;

	for (int i = 0; i < topThree.size(); i++)
	{
		temp.push_back(topThree[i]);

		hold = i;

		if (i > 0)
		{
			while (temp[hold - 1].freq < temp[hold].freq)
			{
				swap(temp[hold], temp[hold - 1]);
				if (hold > 1)
					hold--;
			}
		}
	}

	if (temp.size() < 3)
		for (int i = 0; i < temp.size(); i++)
			T.push_back(temp[i].s);

	else
		for (int i = 0; i < 3; i++)
			T.push_back(temp[i].s);
}







int Autocompleter::size_recurse(Node* p)
{
	if (p == nullptr)
		return 0;

	else
		return 1 + size_recurse(p->left) + size_recurse(p->right);
}



void Autocompleter::completions_recurse(string x, Node* p, vector<Entry>& C)
{
	if (p == nullptr)
		return;

	else
	{
		string pref;
		if (p->e.s.size() >= x.size())
			pref = p->e.s.substr(0, x.size());

		if (pref == x)
		{ 
			C.push_back(p->e);
			completions_recurse(x, p->left, C);
			completions_recurse(x, p->right, C);
		}

		else if (x < p->e.s)
			completions_recurse(x, p->left, C);

		else
			completions_recurse(x, p->right, C);
	}
}



void Autocompleter::insert_recurse(Entry e, Node*& p)
{
	if (p == nullptr)
		p = new Node(e);

	else  
	{ 
		if (e.s < p->e.s)
			insert_recurse(e, p->left);

		else
			insert_recurse(e, p->right);

		update_height(p);
		rebalance(p);
	}
}



void Autocompleter::rebalance(Node*& p)
{
	if (height(p->left) > height(p->right) + 1)
	{
		if (height(p->left->left) > height(p->left->right))
			right_rotate(p);

		else
		{
			// Left right rotation
			left_rotate(p->left);
			right_rotate(p);
		}
	}

	else if (height(p->right) > height(p->left) + 1)
	{
		if (height(p->right->right) > height(p->right->left))
			left_rotate(p);

		else
		{
			// right left lotation
			right_rotate(p->right);
			left_rotate(p);
		}
	}

	else
	{
		//
	}
}



void Autocompleter::right_rotate(Node*& p)
{
	Node* A = p;
	Node* B = p->left;
	Node* br = B->right;

	A->left = br;
	B->right = A;
	p = B;

	update_height(A);
	update_height(B);
}



void Autocompleter::left_rotate(Node*& p)
{
	Node* A = p;
	Node* B = p->right;
	Node* bl = B->left;

	A->right = bl;
	B->left = A;
	p = B;

	update_height(A);
	update_height(B);
}
