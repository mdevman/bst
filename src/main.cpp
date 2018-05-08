/*
 * main.cpp
 *
 *  Created on: Apr 23, 2018
 *      Author: opnmpd
 */


#include<iostream>
using namespace std;
#include "bst.h"

int main()
{
	const int N = 10;
	BST bst;
	for (int i = 0; i < N; i++)
	{
		bst.insert(i);
	}

	int num = 5;
	bool res = bst.search(num);

	if(res)
	{
		cout << "Number " << num << " was found." << endl;
	}
	else
	{
		cout << "Number " << num << " was not found." << endl;
	}

	//print tree
	bst.display(BST::PreOrder);
	bst.display(BST::Inorder);
	bst.display(BST::Postorder);

  return 0;
}

