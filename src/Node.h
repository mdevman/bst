/*
 * Node.h
 *
 *  Created on: Apr 23, 2018
 *      Author: opnmpd
 */

#ifndef NODE_H_
#define NODE_H_

#ifndef NULL
	# define NULL 0
#endif  //NULL

class Node {
public:
	Node(int data, Node * left, Node * right);
	virtual ~Node();

	// data
	int m_data;
	Node * m_left;
	Node * m_right;



};

#endif /* NODE_H_ */
