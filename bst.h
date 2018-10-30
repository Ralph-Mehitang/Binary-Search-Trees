
#include <iostream>
using namespace std;

	struct Treenode {
			int key;
			Treenode* left;
			Treenode* right;
			Treenode* parent;
			}*root;
class bst{
	private:
		/*
		struct Treenode {
			int key;
			Treenode* left;
			Treenode* right;
			Treenode* parent;
			};


		Treenode* root;

*/

	public:

		bst();
		~bst();
		Treenode insert(Treenode*,int);
		Treenode search(Treenode*,int );
		Treenode minimum(Treenode*);
		void maximum();
		void successor();
		void inorder(Treenode *);
		void remove();
		Treenode remove(Treenode*,int);
		void print(Treenode*, int);
	};
