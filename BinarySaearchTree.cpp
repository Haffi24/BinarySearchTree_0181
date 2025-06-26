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
    

   
