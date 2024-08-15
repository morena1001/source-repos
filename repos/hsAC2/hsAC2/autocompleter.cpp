// Josue Flores
// CSCI 3333-03

#include <iostream>
#include <string>
#include <algorithm>
#include "autocompleter.h"

using namespace std;

Autocompleter::Autocompleter()
{
    root = new Node;
    count = 0;
}



void Autocompleter::insert(string x, int freq)
{
    Entry in;
    in.s = x;
    in.freq = freq;

    Node* arrow = root;

    for (int i = 0; i < x.size(); i++)
    {
        if (arrow->children[x[i]] == nullptr)
            arrow->children[x[i]] = new Node;


        arrow->top.push_back(in);
        for (int j = 0; j < arrow->top.size(); j++)
        {
            int hold = j;

            if (j > 0)
            {
                while (arrow->top[hold - 1].freq < arrow->top[hold].freq)
                {
                    swap(arrow->top[hold - 1], arrow->top[hold]);
                    if (hold > 1)
                        hold--;
                }
            }
        }
        if (arrow->top.size() == 4)
            arrow->top.pop_back();


        arrow = arrow->children[x[i]];
    }


    arrow->top.push_back(in);
    for (int j = 0; j < arrow->top.size(); j++)
    {
        int hold = j;

        if (j > 0)
        {
            while (arrow->top[hold - 1].freq < arrow->top[hold].freq)
            {
                swap(arrow->top[hold - 1], arrow->top[hold]);
                if (hold > 1)
                    hold--;
            }
        }
    }
    if (arrow->top.size() == 4)
        arrow->top.pop_back();


    arrow->marked = true;

    count++;
}



int Autocompleter::size()
{
	return count;
}



void Autocompleter::completions(string x, vector<string>& T)
{
    T.clear();


    Node* arrow = root;

    for (int i = 0; i < x.size(); i++)
    {        
        if (arrow->children[x[i]] == nullptr)
            return;

        arrow = arrow->children[x[i]];
    }

    for (int i = 0; i < arrow->top.size(); i++)
        T.push_back(arrow->top[i].s);
}





