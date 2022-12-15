/**
Main Function Needed
**/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct tree
{
    int info;
    struct tree *left;
    struct tree *right;
};

struct tree *insert(struct tree *root, int x)
{
    if(!root)
    {
        root = (struct tree *) malloc(sizeof(struct tree));
        root -> info = x;
        root -> left = NULL;
        root -> right = NULL;
        return(root);
    }
    if(x < root -> info)
    {
        root -> left = insert(root -> left, x);
    }
    else
    {
        if(root->info < x)
        {
            root -> right = insert(root -> right, x);
        }
    }
    return(root);

};


void inorder(struct tree *root)
{
    if(root != NULL)
    {
        inorder(root -> left);
        cout << root -> info ;
        inorder(root -> right);
    }
    return;
}


void postorder(struct tree *root)
{
    if(root != NULL)
    {
        postorder(root -> left);
        postorder(root -> right);
        cout << root -> info;
    }
    return;
}


void preorder(struct tree *root)
{
    if(root != NULL)
    {
        cout << root -> info;
        preorder(root -> left);
        preorder(root -> right);
    }
    return;
}


int main()
{

    {
        struct tree *root = NULL;
        root = inseroot(root, 8);
        root = inseroot(root, 3);
        root = inseroot(root, 1);
        root = inseroot(root, 6);
        root = inseroot(root, 7);
        root = inseroot(root, 10);
        root = inseroot(root, 14);
        root = inseroot(root, 4);
    };
    cout << "Inorder traversal: \n";
    inorder(root);
    cout << "Preorder traversal: \n";
    preorder(root);
    cout << "Postorder traversal: \n";
    postorder(root);

    getch();
}
