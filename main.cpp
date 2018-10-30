
#include <iostream>
using namespace std;
#include "bst.h"

void program_menu(){

int input, value;
bst test;
Treenode *tmp;
    while (1)
    {
        cout<<"-----------------"<<endl;
        cout<<"Operations on BST"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"1.Insert Element "<<endl;
        cout<<"2.Delete Element "<<endl;
        cout<<"3.Search "<<endl;
        cout<<"4.Get Minimum "<<endl;
        cout<<"5.get Maximum "<<endl;
        cout<<"6.get Inorder Traversal "<<endl;
        cout<<"7.get successor "<<endl;
        cout<<"8.Display"<<endl;
        cout<<"9.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>input;
        switch(input)
        {
        case 1:
            tmp = new Treenode;
            cout<<"Enter the number to be inserted : ";
	   		cin>>value;
            test.insert(root, value);
            break;
        case 2:
            cout<<"Enter the number to be deleted : ";
            cin>>value;
            test.remove(root,value);
            break;
        case 3:
            cout<<"search:"<<endl;
            test.search(root,value);
            cout<<endl;
            break;
		case 4:
            cout<<"Minimum Value of BST:"<<endl;
            test.minimum(root);
            cout<<endl;
            break;
        case 5:
            cout<<"Maximum value of BST:"<<endl;
            cout<<endl;
            break;
        case 6:
            cout<<"Inorder Traversal:"<<endl;
            test.inorder(root);
            cout<<endl;
            break;
        case 7:
            cout<<"successor"<<endl;
            break;
        case 8:

        		test.print(root,1);
        break;
        case 9:
        exit(1);
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
}


int main(){
program_menu();

	return 0;
}