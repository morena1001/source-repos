#pragma once

#ifndef MINPRIORITYQUEUE_H
#define MINPRIORITYQUEUE_H

// NOTE: You may not include any other libraries!
#include <unordered_map>
#include <vector>
#include <utility> // Has pair and swap

using namespace std;

template <typename T>
class MinPriorityQueue
{
	// For the mandatory running times below:
	//
	// n is the number of elements in the MinPriorityQueue.
	//
	// Assume that the operations of unordered_map are O(1) time 
	// (they are average case, but not worst-case).

public:
	// Creates an empty MinPriorityQueue
	MinPriorityQueue()
	{
		H.clear();
		I.clear();
	}

	// Returns the number of elements in the MinPriorityQueue.
	//
	// Must run in O(1) time.
	int size()
	{
		return H.size();
	}

	// Pushes a new value x with priority p
	// into the MinPriorityQueue.
	//
	// Must run in O(log(n)) time.		 
	void push(T x, int p)
	{
		pair <T, int> a;
		a.first = x;
		a.second = p;
		H.push_back(a);

		pair <T, int> b;
		b.first = x;
		b.second = size() - 1;
		I.insert(b);
		
		bubbleUp(size() - 1);
	}

	// Returns the value at the front of the MinPriorityQueue.
	// Undefined behavior if the MinPriorityQueue is empty.
	// 
	// Must run in O(1) time.
	T front()
	{
		if (!H.empty())
			return H[0].first;
	}

	// Removes the value at the front of the MinPriorityQueue.
	// Undefined behavior if the MinPriorityQueue is empty.
	//
	// Must run in O(log(n)) time. 
	void pop()
	{
		if (!H.empty())
		{
			swap(H[0], H[size() - 1]);
			H.pop_back();
			bubbleDown(0);
		}
	}

	// If x is in the MinPriorityQueue 
	// with current priority at least new_p,  
	// then changes the priority of x to new_p.
	// Undefined behavior otherwise.
	//
	// Must run in O(log(n)) time. 
	void decrease_key(T x, int new_p)
	{
		H[I[x]].second = new_p;
		bubbleUp(I[x]);
	}

private:
	// You don't need any other instance variables,
	// but you can add some if you want to.
	vector< pair<T, int> > H; // The heap.
	unordered_map<T, int> I;  // Maps values to their indices in H.
	

	int parent(int i)
	{
		return (i - 1) / 2;
	}


	int leftChild(int i)
	{
		return 2 * i + 1;
	}


	int rightChild(int i)
	{
		return 2 * i + 2;
	}


	void bubbleUp(int i)
	{
		if (H[i].second >= H[parent(i)].second)
		{
		}

		else
		{
			swap(H[i], H[parent(i)]);
			swap(I[H[i].first], I[H[parent(i)].first]);
			bubbleUp(parent(i));
		}
	}


	void bubbleDown(int i)
	{
		int lc = leftChild(i);
		int rc = rightChild(i);

		if (lc > size() - 1)
		{
		}

		else if (rc > size() - 1)
		{
			if (H[i].second > (H[lc].second))
			{
				T a = H[i].first;
				T b = H[lc].first;
				swap(H[i], H[lc]);
				swap(I[a], I[b]);
			}
		}

		else
		{
			if (H[lc].second <= H[rc].second)
			{
				T a = H[i].first;
				T b = H[lc].first;
				swap(H[i], H[lc]);
				swap(I[a], I[b]);
				bubbleDown(lc);
			}

			else if (H[rc].second <= H[lc].second)
			{
				T a = H[i].first;
				T b = H[rc].first;
				swap(H[i], H[rc]);
				swap(I[a], I[b]);
				bubbleDown(rc);
			}

			else
			{
			}
		}
	}
};

#endif 
