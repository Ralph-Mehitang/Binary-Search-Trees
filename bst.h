#include <iostream>
using namespace std;


class bst{
	private:
		struct Treenode {
			int key;
			Treenode* left;
			Treenode* right;
			Treenode* parent;
			};


		Treenode* root;

	public:

		void insertroot(Treenode *, int key);
		void search();
		void minimum();
		void maximum();
		void successor();
		void inorder(Treenode *root);
		void remove();
		void print();
		int newnode(int);
	};
