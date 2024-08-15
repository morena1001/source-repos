// Josue Flores
// CSCI 3333-03

#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include "solve.h"
#include "vertex.h"

using namespace std;



void newNeighbors(Vertex* vert, unordered_map<string, Vertex*> & vertSet)
{
    string newNeigh = "";


    // Check for top neighbor
    newNeigh = to_string(vert->row - 1) + "," + to_string(vert->col);
    if (vertSet.count(newNeigh) != 0)
    {
        vert->neighs.push_back(vertSet[newNeigh]);
        Vertex* basicEdge = vertSet[newNeigh];
        basicEdge->neighs.push_back(vert);
    }

    // Check for bottom neighbor
    newNeigh = to_string(vert->row + 1) + "," + to_string(vert->col);
    if (vertSet.count(newNeigh) != 0)
    {
        vert->neighs.push_back(vertSet[newNeigh]);
        Vertex* basicEdge = vertSet[newNeigh];
        basicEdge->neighs.push_back(vert);
    }

    // Check for left neighbor
    newNeigh = to_string(vert->row) + "," + to_string(vert->col - 1);
    if (vertSet.count(newNeigh) != 0)
    {
        vert->neighs.push_back(vertSet[newNeigh]);
        Vertex* basicEdge = vertSet[newNeigh];
        basicEdge->neighs.push_back(vert);
    }

    // Check for right neighbor
    newNeigh = to_string(vert->row) + "," + to_string(vert->col + 1);
    if (vertSet.count(newNeigh) != 0)
    {
        vert->neighs.push_back(vertSet[newNeigh]);
        Vertex* basicEdge = vertSet[newNeigh];
        basicEdge->neighs.push_back(vert);
    }
}



void SEPoints(string maze, int j, unordered_map<string, Vertex*>& vertSet, Vertex* & sVert, Vertex* & dVert)
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
        if ((i == 0 && maze[a] == ' ') || (maze[a] == ' ' && maze[a + 1] == '\n'))
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
        else if ((b == 0 || b == j - 1) && maze[a] == ' ')
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



void BSF(Vertex* sVert, unordered_map<Vertex*, Vertex*> & breadCrumbs)
{
    queue<Vertex*> Q;
    unordered_set<Vertex*> marked;
    Vertex* x;


    // Step 2.2.1:
    marked.insert(sVert);
    Q.push(sVert);

    // step 2.2.2:
    while (!Q.empty())
    {
        // Step 2.2.2.1
        x = Q.front();
        Q.pop();

        // Step 2.2.2.2
        for (int i = 0; i < x->neighs.size(); i++)
        {
            if (marked.count(x->neighs[i]) == 0)
            {
                marked.insert(x->neighs[i]);
                Q.push(x->neighs[i]);

                breadCrumbs[x->neighs[i]] = x;
            }
        }
    }
}



void shortestPath(Vertex* sVert, Vertex* dVert, int lineSize, string & solution, unordered_map<Vertex*, Vertex*> breadCrumbs)
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
	string newNeigh;


	// Step 1 : Make all open spaces vertices, and connect them 

    for (int a = 0, i = 0; a < maze.size(); a++, i++)
	{
        // Step 1.1 : Check to see if we go down the next row
        if (maze[a] == '\n')
        {
            j++;
            i = -1;
        }

        // Step 1.2 : Adds Vertex and assigns its neighbors
		if (maze[a] == ' ')
		{
			Vertex* vert = new Vertex(j, i);
			string coor = to_string(j) + "," + to_string(i);
			vertSet[coor] = vert;
			
            // Step 1.2.1 : Check if its row and column neighbors are vertex
            newNeighbors(vert, vertSet);
		}
	}

	
    Vertex* sVert = nullptr;
    Vertex* dVert = nullptr;
    unordered_map<Vertex*, Vertex*> breadCrumbs;


    // Step 2 : Calculate shortest path

    // Step 2.1 : Grab start and finish vertices
    SEPoints(maze, j, vertSet, sVert, dVert);


    // Step 2.2 : Do BSF with sVert as source
    BSF(sVert, breadCrumbs);
    

    // Step 2.3 : create path from start to end
    shortestPath(sVert, dVert, maze.size() / j, solution, breadCrumbs);

    return solution;

}

