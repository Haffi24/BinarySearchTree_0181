#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rigtchild;


    //Constructor for the node class
    Node()
    {
        leftchild = nullptr; 
        rigtchild = nullptr;
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //initilize root to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan Nilai: ";
        cin >> x;
    }
    

    // Step 1 : ALLOCATE MEMORY FOR THE NEW NODE
    Node *newNode = new Node();

    //Step 2 : Asiign value to the data field of new node
    newNode->info = x;

    //step 3 : Make the left and right child of the new node point to null
    newNode->leftchild = nullptr;
    newNode->rightchild = nullptr;

    //step 4 : Locate the nodoe which will be the parent of the node to be insterted
    Node *parent = nullptr;
    Node *currentNode = nullptr;
    search(x, parent, currentNode);
