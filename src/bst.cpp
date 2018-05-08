//============================================================================
// Name        : bst.cpp
// Author      : Mike Devlin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "bst.h"
#include <iostream>
using namespace std;

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
	{
		if (data < root -> m_data)
		{
			return insert(root -> m_left, data);
		}
		else
		{
			if (data > root -> m_data)
			{
				return insert(root -> m_right, data);
			}
			else
			{
				return 0;
			}
		}
	}
}

void BST::display(TraversalType tType)
{
	switch(tType)
	{
	case PreOrder:
		displayPreorder(m_root);
		break;
	case Inorder:
		displayInorder(m_root);
		break;
	case Postorder:
		displayPostorder(m_root);
		break;
	}
}

void BST::displayPreorder(Node * root)
{
	//0.validate root is not null
	if (root == 0)
	{
		return;
	}

	//1. try to go left
	displayPreorder (root -> m_left);

	//2. visit --> display data
	cout << root -> m_data << endl;

	//3. try to go right
	displayPreorder(root -> m_right);

}

void BST::displayInorder(Node * root)
{
	//0.validate root is not null
	if (root == 0)
	{
		return;
	}

	//1. visit --> display data
	cout << root -> m_data << endl;

	//2. try to go left
	displayInorder (root -> m_left);

	//3. try to go right
	displayInorder(root -> m_right);

}

void BST::displayPostorder(Node * root)
{
	//0.validate root is not null
	if (root == 0)
	{
		return;
	}

	//1. try to go left
	displayPostorder (root -> m_left);

	//2. try to go right
	displayPostorder(root -> m_right);

	//3. visit --> display data
	cout << root -> m_data << endl;

}

Node *BST::search(Node * root, int data)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (data == root -> m_data)
	{
		return root;
	}
	else
	{
		if (data < root -> m_data)
		{
			return search(root -> m_left, data);
		}
		else
		{
			if (data > root -> m_data)
			{
				return search(root -> m_right, data);
			}
//			else
//			{
//				return 0;
//			}
		}
	}
}

BST::~BST() {


}
