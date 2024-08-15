#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;
};

int fastFind(vector<double>& A, double key);
node* buildTree(vector<double>& A, int start, int end);
void levelOrderTraversal(node* r);

void printTree(node* root);


int main()
{
    vector<double> A = { 12, 17, 20, 28, 32, 55, 68, 77, 78, 81, 84, 87, 88, 93, 101, 120 };
    cout << fastFind(A, 120) << endl;

    node* root = buildTree(A, 0, 15);
    printTree(root);

    node* B = new node;
    B->left = new node;
    B->right = new node;
    B->left->left = new node;
    B->left->right = new node;
    B->right->left = new node;
    B->data = 1;
    B->left->data = 2;
    B->right->data = 3;
    B->left->left->data = 4;
    B->left->right->data = 5;
    B->right->left->data = 6;
    cout << endl;
    levelOrderTraversal(B);
}



int fastFind(vector<double>& A, double key)
{
    int y = 0;
    int x = 1;

    while (A[x] < key && x <= A.size() - 1)
    {
        y = x;
        x = x * 2;
    }

    if (x > A.size())
        x = A.size();

    while (y <= x)
    {
        int middle = (y + x) / 2;

        if (key < A[middle])
        {
            x = middle - 1;
            middle = (y + x) / 2;
        }

        else if (key > A[middle])
        {
            y = middle + 1;
            middle = (y + x) / 2;
        }

        if (A[middle] == key)
            return middle;
    }

    return -1;
}



node* buildTree(vector<double>& A, int start, int end)
{
    if (start > end)
        return 0;

    else
    {
        int middle = (start + end) / 2;
        node* root = new node;
        root->data = A[middle];

        root->left = buildTree(A, start, middle - 1);
        root->right = buildTree(A, middle + 1, end);

        return root;
    }
}



void levelOrderTraversal(node* r)
{
    if (r == nullptr)
        return;

    queue<node*> q;
    q.push(r);

    while (!q.empty())
    {
        node* temp = q.front();
        if (temp != nullptr)
            cout << temp->data << " ";
        q.pop();

        if (temp->left != nullptr)
            q.push(temp->left);

        if (temp->right != nullptr)
            q.push(temp->right);
    }
}



void printTree(node* root)
{
    if (root == nullptr)
        return;

    printTree(root->left);
    cout << root->data << ' ';
    printTree(root->right);
}
