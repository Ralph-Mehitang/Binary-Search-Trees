#include <iostream>
#include <stdlib.h>
#include "bst.h"

using namespace std;

// creating a new bst node

int bst::newnode (int value){

	Treenode *tmp = (Treenode nodep *)/malloc(sizeof(Treenode nodep));
	tmp->key=value;
	tmp->left=tmp->right=NULL;
	return tmp;
} 
void bst :: inorder(Treenode *root){

if (root!=NULL)
{
	inorder(root->left);
	cout<<root->key<<endl;
	inorder(root->right);


}


}

//inserts new node using given key
void bst :: insert(Treenode * root, int key){
Treenode *tmp = 

}

void bst :: search (Treenode *root)