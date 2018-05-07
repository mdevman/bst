//============================================================================
// Name        : bst.cpp
// Author      : Mike Devlin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "bst.h"
# include <iostream>
using namesspace std;

BST::BST()
{
	m_root = NULL;
}

Node *BST::insert(Node * &root, int data)
{
	if (root==0)
	{
		return root = new Node(data,0,0);
	}
	else
	if (data < root -> m_data)
	{
		return insert(root -> m_left, data);
	}
	else
	if (data > root -> m_data)
	{
		return insert(root -> m_right, data);
	}
	else
	{
		return 0;
	}
}

void BST::display(TraversalType tType)
{
	switch(tType)
	{

	}
}

BST::~BST() {


}
