/*
 * bst.h
 *
 *  Created on: Apr 23, 2018
 *      Author: opnmpd
 */

#ifndef BST_H_
#define BST_H_

# include "Node.h"

class BST {
public:
	enum TraversalType { PreOrder, Inorder, Postorder};
	BST();

	//Node * insert(Node * &root, int data);
	bool insert(int data)
		{
		return insert(m_root, data) != NULL;
		}

	bool search(int data)
		{
		return search(m_root, data) != NULL;
		}
	/*
	void display()
	{
		display(m_root);
	}
	*/
	/*
	void display2()
	{
		display(m_root);
	}
	*/
	/*
	void display3()
	{
		display(m_root);
	}
	*/

	void display()
	{
		display(TraversalType tType);
	}

	virtual ~BST();

private:
	Node * insert(Node * &root, int data);  //reference to pointer, change variable affects sent
	Node * search(Node * root, int data);  //recursive search function
	void displayPreorder(Node * root);
	void displayInorder(Node * root);
	void displayPostorder(Node * root);

	//data
	Node * m_root;

};



#endif /* BST_H_ */
