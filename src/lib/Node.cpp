#include "Node.h"

Node::Node(int value, int balance, Node *left, Node *right){
	this->value = value;
	this->balance = balance;
	this->left = left;
	this->right = right;	
}