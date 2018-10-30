#include <iostream>
#include <stdlib.h>
#include "bst.h"

using namespace std;

// creating a new bst node

bst ::bst(){

	root=NULL; //initialize root to NULL for later
}
//destructor
bst ::~bst(){

	Treenode *node=root;
	while(node!=NULL)
  {
    delete node;
}
}

//inorder traversal of the binary search tree
void bst :: inorder(Treenode *root){

if (root!=NULL)
{
	inorder(root->left);
	cout<<root->key<<endl;
	inorder(root->right);


}


}

//inserts new node using given key
Treenode bst :: insert(Treenode* node, int key){
	if (root==NULL)
	{
		root=new Treenode;
		root->key=node->key;
		root->left=NULL;
		root->right=NULL;
		cout<<"New Root node has been added"<<endl;
		
	}
if( key < node->key){
	if (node->left!=NULL)
	{
	insert(node->left,key);
	}
	else
	{
		node->left=new Treenode;
		node->left->key=key;
	node->left->left=NULL;    //Sets the left child of the child node to null
      node->left->right=NULL;   //Sets the right child of the child node to null
      cout<<"Node has been added to the left"<<endl;
      
    }  
  }
  else if(key>=node->key)
  {
    if(node->right!=NULL)
      insert(node->right,key);
    else
    {
      node->right=new Treenode;
      node->right->key=key;
      node->right->left=NULL;  //Sets the left child of the child node to null
      node->right->right=NULL; //Sets the right child of the child node to null
      cout<<"Node has been added to the right"<<endl;
   
    }
  }

}
/*
Treenode bst ::remove(Treenode *node,int val){

if (node==NULL)
{
	return *node;
	cout<<"Nothing to delete"<<endl;
}
//if the key that needs to be deleted is smaller than the key of the root then go to the left subtree
if(val<node->key){
	node->left=remove(node->left,val)
}
//vice versa
else if(val>root->key){
	node->right=remove(node->right,val);

}

else {
	//nodes that have one or two children
	if(node->left==NULL){
		Treenode *tmp=root->right;
		free(root);
		return *tmp;
	}

	else if(root->right==NULL){
		Treenode *tmp=root->left;
		free(root);
		return *tmp;
	}

}
}
*/

//search recursively moves down tree until it reaches a node with equal value of val being searched
Treenode bst :: search (Treenode* node,int key){
if(node!=NULL){

	if(key==node->key);
	return *node;
	if(key<node->key);
	return search(node->left,key);
}
	else 
	return search(node->right, key);

}

Treenode bst :: minimum(Treenode *node){

	Treenode *tmp=node;
	//finding the left most leaf
	while(tmp->left!=NULL){
		tmp=tmp->left;
	}
	return *tmp;
}
//print
void bst:: print(Treenode *node, int val){

	if(node!=NULL){
		print(node->right,val+1);
		cout<<endl;
		if(node==root);
		cout<<"Root";
}
else{
	for (int i = 0; i < val; i++)
	{
		cout<<"       ";
	}
	cout<<node->key;
	print(node->left,val+1);
}
}