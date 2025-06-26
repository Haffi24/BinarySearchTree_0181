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


