// Josue Flores
// CSCI 3333-03

#include <iostream>
#include <vector>
#include <string>
#include "trendtracker.h"

using namespace std;



Trendtracker::Trendtracker()
{
    vector<Entry> E;
}



void Trendtracker::insert(string ht)
{
    for (int i = 0; i < size(); i++)
    {
        if (E[i].hashtag == ht)
            return;
    }

    Entry a;
    a.hashtag = ht;
    a.pop = 0;
    E.push_back(a);
}



int Trendtracker::size()
{
    return E.size();
}



void Trendtracker::tweeted(string ht)
{
    for (int i = 0; i < size(); i++)
    {
        if (E[i].hashtag == ht)
        {
            E[i].pop++;
            return;
        }
    }
}



int Trendtracker::popularity(string name)
{
    for (int i = 0; i < size(); i++)
    {
        if (E[i].hashtag == name)
            return E[i].pop;
    }

    return -1;
}



string Trendtracker::top_trend()
{
    if (size() == 0)
    {
        return "";
    }

    else
    {
        int a = 0;

        Entry Top;
        Top.hashtag = E[a].hashtag;
        Top.pop = E[a].pop;

        if (size() == 1)
            return E[a].hashtag;

        for (int i = 1; i < size(); i++)
        {
            if (E[i].pop > E[a].pop)
                a = i;
        }

        return E[a].hashtag;
    }
}



void Trendtracker::top_three_trends(vector<string>& T)
{
    T.clear();
    vector<Entry> x;
    int hold;

    for (int i = 0; i < size(); i++)
    {

        x.push_back(E[i]);

        hold = i;

        if (i > 0)
        {
            while (x[hold - 1].pop < x[hold].pop)
            {
                swap(x[hold], x[hold - 1]);
                if (hold > 1)
                    --hold;
            }
        }

        //if (x.size() > 4)
          //  x.pop_back();
    }

    if (x.size() < 3)
        for (int i = 0; i < x.size(); i++)
            T.push_back(x[i].hashtag);
    else
        for (int i = 0; i < 3; i++)
            T.push_back(x[i].hashtag);
}



void Trendtracker::remove(string ht)
{
    for (int i = 0; i < size(); i++)
    {
        if (E[i].hashtag == ht)
            E.erase(E.begin() + i);
    }
}



void Trendtracker::top_k_trends(vector<string>& T, int k)
{
    T.clear();
    vector<Entry> x;
    int hold;

    for (int i = 0; i < size(); i++)
    {
        x.push_back(E[i]);

        hold = i;
        
        if (i > 0)
        {
            while (x[hold - 1].pop < x[hold].pop)
            {
                swap(x[hold - 1], x[hold]);
                if (hold > 1)
                    hold--;
            }
        }

        //if (x.size() > k)
          //x.pop_back();
    }

    if (x.size() < k)
        for (int i = 0; i < x.size(); i++)
            T.push_back(x[i].hashtag);
    else
        for (int i = 0; i < k; i++)
            T.push_back(x[i].hashtag);
}