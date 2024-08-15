// Josue Flores
// CSCI 3333-03

// COMMENT : I changed the Vertex class and added the new Vertex class to this cpp file

#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include "solve.h"

using namespace std;



class Vertex
{
public:
    Vertex(int r, int c)
    {
        row = r;
        col = c;
        weight = 0;
    }

    // Corresponding row and column location in maze
    int row;
    int col;
    int weight;

    // List of neighboring vertices
    vector< pair<Vertex*, int> > neighs;
};



void newRegNeighbors(Vertex* vert, unordered_map<string, Vertex*>& vertSet)
{
    string newNeigh = "";
    Vertex* basicEdge;
    pair<Vertex*, int> u;

    // Check for top neighbor
    newNeigh = to_string(vert->row - 1) + "," + to_string(vert->col);
    if (vertSet.count(newNeigh) != 0)
    {
        u.first  = vertSet[newNeigh];
        u.second = 1;
        vert->neighs.push_back(u);

        basicEdge = vertSet[newNeigh];
        u.first = vert;
        basicEdge->neighs.push_back(u);
    }

    // Check for bottom neighbor
    newNeigh = to_string(vert->row + 1) + "," + to_string(vert->col);
    if (vertSet.count(newNeigh) != 0)
    {
        u.first = vertSet[newNeigh];
        u.second = 1;
        vert->neighs.push_back(u);

        basicEdge = vertSet[newNeigh];
        u.first = vert;
        basicEdge->neighs.push_back(u);
    }

    // Check for left neighbor
    newNeigh = to_string(vert->row) + "," + to_string(vert->col - 1);
    if (vertSet.count(newNeigh) != 0)
    {
        u.first = vertSet[newNeigh];
        u.second = 1;
        vert->neighs.push_back(u);

        basicEdge = vertSet[newNeigh];
        u.first = vert;
        basicEdge->neighs.push_back(u);
    }

    // Check for right neighbor
    newNeigh = to_string(vert->row) + "," + to_string(vert->col + 1);
    if (vertSet.count(newNeigh) != 0)
    {
        u.first = vertSet[newNeigh];
        u.second = 1;
        vert->neighs.push_back(u);

        basicEdge = vertSet[newNeigh];
        u.first = vert;
        basicEdge->neighs.push_back(u);
    }
}



void newTeleportNeighs(Vertex* vert, int weight, string coor, unordered_map<string, Vertex*>& vertSet, unordered_map<int, string>& TPSet)
{
    if (TPSet.count(weight) == 1)
    {
        pair<Vertex*, int> u;

        u.first = vert;
        u.second = weight;
        vertSet[TPSet[weight]]->neighs.push_back(u);

        u.first = vertSet[TPSet[weight]];
        vert->neighs.push_back(u);
    }

    else if (TPSet.count(weight) == 0)
        TPSet[weight] = coor;
}



void SEPoints(string maze, int j, unordered_map<string, Vertex*>& vertSet, Vertex*& sVert, Vertex*& dVert)
{
    int lineSize = maze.size() / j;
    int b = 0;
    bool startFound = false;


    // Loop through edges of maze
    for (int a = 0, i = 0; a < maze.size(); a++, i++)
    {
        if (maze[i] == '\n')
        {
            b++;
            i = -1;
        }

        // Checks if left or right of the boundary has any openings
        if ((i == 0 || maze[a+1] == '\n') && (maze[a] == ' ' || isdigit(maze[a])))
        {
            if (!startFound)
            {
                string coor = to_string(b) + "," + to_string(i);
                sVert = vertSet[coor];
                startFound = true;
            }

            else
            {
                string coor = to_string(b) + "," + to_string(i);
                dVert = vertSet[coor];
                break;
            }
        }

        // Check if the top or bottom of the boundary has any openings
        else if ((b == 0 || b == j - 1) && (maze[a] == ' ' || isdigit(maze[a])))
        {
            if (!startFound)
            {
                string coor = to_string(b) + "," + to_string(i);
                sVert = vertSet[coor];
                startFound = true;
            }

            else
            {
                string coor = to_string(b) + "," + to_string(i);
                dVert = vertSet[coor];
                break;
            }
        }
    }
}



void relaxFunction(Vertex* a, pair<Vertex*, int> b, unordered_map<Vertex*, Vertex*>& breadCrumbs, MinPriorityQueue<Vertex*>& PQ)
{
    if (a->weight + b.second < b.first->weight)
    {
        b.first->weight = a->weight + b.second;
        breadCrumbs[b.first] = a;
        PQ.push(b.first, b.first->weight);
    }
}



void dijkstra(Vertex* sVert, unordered_map<Vertex*, Vertex*>& breadCrumbs, unordered_map<string, Vertex*> vertSet)
{
    MinPriorityQueue<Vertex*> PQ;
    Vertex* x = sVert;

    for (auto i : vertSet)
    {
        i.second->weight = INT_MAX;
    }
    x->weight = 0;
    PQ.push(x, x->weight);

    while (PQ.size() != 0)
    {
        x = PQ.front();
        PQ.pop();

        for (int i = 0; i < x->neighs.size(); i++)
        {
            pair<Vertex*, int> b = x->neighs[i];
            relaxFunction(x, b, breadCrumbs, PQ);
        }
    }
}



void shortestPath(Vertex* sVert, Vertex* dVert, int lineSize, string& solution, unordered_map<Vertex*, Vertex*> breadCrumbs)
{
    Vertex* current = dVert;
    while (current != sVert)
    {
        int coorToLine = (current->row * lineSize) + current->col;
        solution[coorToLine] = 'o';
        current = breadCrumbs[current];
    }

    int coorToLine = (current->row * lineSize) + current->col;
    solution[coorToLine] = 'o';
}



string solve(string maze)
{
	int j = 0;
	string solution = maze;
	unordered_map<string, Vertex*> vertSet;
    unordered_map<int, string> TPSet;
	string newNeigh;

	
	// STEP 1 : Walk through the maze and create the graph
    for (int a = 0, i = 0; a < maze.size(); a++, i++)
    {
        // STEP 1.1 : Check for new lines
        if (maze[a] == '\n')
        {
            j++;
            i = -1;
        }

        // STEP 1.2 : Add a ' ' vertex
        if (maze[a] == ' ')
        {
            Vertex* vert = new Vertex(j, i);
            string coor = to_string(j) + "," + to_string(i);
            vertSet[coor] = vert;

            // STEP 1.2.1 : Creates edges if it has neighbors
            newRegNeighbors(vert, vertSet);
        }

         //STEP 1.3 : Add a teleport vertex
        else if (isdigit(maze[a]))
        {
            int w = int(maze[a]) - int('0');
            Vertex* vert = new Vertex(j, i);
            string coor = to_string(j) + "," + to_string(i);
            vertSet[coor] = vert;

            // STEP 1.3.1 : Creates edges if it has neighbors
            newRegNeighbors(vert, vertSet);
            newTeleportNeighs(vert, w, coor, vertSet, TPSet);
        }
    }


    // STEP 2 : Calculate shortest path
    Vertex* sVert = nullptr;
    Vertex* dVert = nullptr;
    unordered_map<Vertex*, Vertex*> breadCrumbs;

    // STEP 2.1 : Grab start and end vertices
    SEPoints(maze, j, vertSet, sVert, dVert);

    // STEP 2.2 : Run Dijkstra's Algorithm 
    dijkstra(sVert, breadCrumbs, vertSet);

    // STEP 2.3 : Create path from start to end
    shortestPath(sVert, dVert, maze.size() / j, solution, breadCrumbs);

	return solution;
}
