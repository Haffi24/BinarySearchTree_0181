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

    //Step 5 : if the parent is null (tree is empty)
    if (parent == nullptr)
    {
        //step 5a : MARK THE NEW NODE AS ROOT
        ROOT = newNode;

        //step 5b: EXIT
        return;

    } 

    //step 6 : IF THE CALUE IN THE DATA FIELD OF THE NODES IS LESS THAN THAT OF PARENT
    if (x < parent->info)
    {
        //6a : make the left child of parent point to the new node
        parent->leftchild = newNode;

        //6b : Exit
        return;

    }

    //STEP 7 : IF the value in the data field of the new node is greater than that of the parent
    else if (x > parent->info)
    {
       //7a : Make the roght child of parent point to the newnode
       parent->rightchild = newNode;
       
       


       //7b : exit
       return;
       w
    }
}


void search(int element, Node *&parent, Node *&currentNode)
{
    //This function searches the currentnode of the specified node as well as the current node of its parrent
    currentNode = ROOT;
    parent = nullptr;
    while (( currentNode != nullptr) && (currentNode->info != element))
    {
        parent = currentNode;
        if (element < currentNode->info)
            currentNode = currentNode->leftchild;
        else
        currentNode = currentNode->rigtchild
    
    }
}

void inorder(Node *ptr)
{
    if(is_empty())
    {
        cout << "Tree is Empty" << endl;
        return;
    }
    if (ptr ==nullptr)
    return;

    inorder(ptr->leftchild);
    cout << ptr->info << " "; //parrent
    inorder(ptr->rigtchild);


}


void preorder(Node *ptr)
{
    if(is_empty())
    {
        cout << "Tree is Empty" << endl;
        return;
    }
    if (ptr ==nullptr)
    return;

    cout << ptr->info << " "; //parrent
    preorder(ptr->leftchild);
    preorder(ptr->rigtchild);


}


void postorder(Node *ptr)
{
    if(is_empty())
    {
        cout << "Tree is Empty" << endl;
        return;
    }
    if (ptr ==nullptr)
    return;

    postorder(ptr->leftchild);
    postorder(ptr->rigtchild);
    cout << ptr->info << " "; //parrent


    bool isEmpty()
    {
        //Checks if the tree is empty
        return ROOT == nullptr;
    }


};

int main()
{
BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.ROOT);
            break;
        }
        case '3':
        {

            x.preorder(x.ROOT);
            break;
        }
        case '4':
        {

            x.postorder(x.ROOT);
            break;
        }
        case '5':
            return 0;
        default:
        {
            cout << "Invalid option" << endl;
            break;
        }
        }
    }
}
