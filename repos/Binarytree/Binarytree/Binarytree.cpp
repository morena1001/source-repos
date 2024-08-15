#include <iostream>
#include <iomanip>
#include <string>
#include "Node.h"

using namespace std;

// TODOS: Remove the "nothing" and the "0s" in the function when you are ready to start coding them. (HINT: Make sure that the return types are of the correct type)

// find the node 3 and print out the string attached to it
string find3(Node* root) {
	return root->left->info;
}

// find the node 6 and print out the string attached to it
string find6(Node* root) {
	return "nothing";
}

// find the node 4 and print out the value attached to it
int find4(Node* root) {
	return 0;
}

// find how many traversals it takes to get to the longest path (HINT: draw the tree)
int longest_path(Node* root) {
	return 0;
}


int main() {

	// Do not touch this code until the TODOS
	int value = 89;
	string comment = "Congratulations, you have added a node!";
	Node* activity = new Node(1);

	activity->right = new Node(2);
	activity->left = new Node(3);

	activity->right->right = new Node(5);
	activity->left->right = new Node(80);
	activity->left->left = new Node(9);

	activity->right->right->right = new Node(70);
	activity->right->right->left = new Node(10);
	activity->left->right->right = new Node(17);
	activity->left->right->left = new Node(4);
	activity->left->left->left = new Node(33);

	activity->right->right->right->right = new Node(100);
	activity->right->right->right->left = new Node(6);


	cout << "Press run and the output will tell you if you got it right\n\n\n";
	cout << "Find 3 function: " << find3(activity) << endl;
	cout << "Find 6 function: " << find6(activity) << endl;
	cout << "Find 4 function: " << find4(activity) << endl;
	cout << "Longest Path function: " << longest_path(activity) << endl;

	// TODOS: Using similar syntax to the above, add a Node to the end of 100 and include the comment, then print out the value using the nodes

	// ------------START CODING HERE----------------- //





	//  If you are getting 'signal: segmentation fault (core dumped)', it might be because you have not properly added the node

	cout << "This line should return 89; Yours returns: \t" << activity->right->right->right->right->right->key << endl;
}