#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
using namespace std;


class directedGraph
{
private:
    class vertex
    {
    public:
        string data;

        // Adjacency list representation . Can also use an adjacency Matrix .  
        vector<vertex*> neighbors;

        vertex(string x)
        {
            data = x;
        }
    };


    // A hash table to hold all the vertices in the graph
    unordered_map<string, vertex*> vertexSet;


    void breadthFirstSearch(vertex* source, unordered_map<vertex*, vertex*>& breadCrumbs)
    {
        // Step -1: Setup
        queue<vertex*> Q;
        unordered_set<vertex*> marked;
        vertex* x;


        // Step 0: 
        marked.insert(source);
        Q.push(source);

        // step 1: 
        while (!Q.empty())
        {
            // Step 1.1
            x = Q.front();
            Q.pop();

            // Step 1.2 
            for (int i = 0; i < x->neighbors.size(); i++)
            {
                if (marked.count(x->neighbors[i]) == 0)
                {
                    marked.insert(x->neighbors[i]);
                    Q.push(x->neighbors[i]);

                    breadCrumbs[x->neighbors[i]] = x;
                    // Read as: setting x's ith neighbor's breadcrumb to x
                }
            }
        }
    }



public:
    void addVertex(string x)
    {
        vertex* babyVertex = new vertex(x);

        // Put the babyVertex into the vertex container . Adds weight to being a vertex . 
        vertexSet[x] = babyVertex;
    }



    void addDirectedEdge(string a, string b)
    {
        //vertex* aVert = vertexSet[a];
        //vertex* bVert = vertexSet[b];
        vertex* aVert = vertexSet.at(a);
        vertex* bVert = vertexSet.at(b);

        aVert->neighbors.push_back(bVert);
    }



    void addBasicEdge(string a, string b)
    {
        addDirectedEdge(a, b);
        addDirectedEdge(b, a);
    }



    string shortestPath(string s, string d)
    {
        // Get vertices of given values 
        vertex* sVert = vertexSet.at(s);
        vertex* dVert = vertexSet.at(d);

        unordered_map<vertex*, vertex*> breadCrumbs;

        // Do a BSF with source sVert;
        breadthFirstSearch(sVert, breadCrumbs);

        // Start at d, follow breadcrumb trail to s to get the shortest path; 
        string path;

        vertex* current = dVert;
        while (current != sVert)
        {
            path = current->data + path;
            current = breadCrumbs[current];
        }

        path = sVert->data + path;

        return path;
    }
};
