#include <iostream>
#include <fstream>
#include "HuffmanNode.h"

using namespace std;


HuffmanNode::HuffmanNode(int weight, int value) // Constructor holds integer weight and value
{
	this->left = NULL; // Left initialized
	this->right = NULL; // Right initialized
}

HuffmanNode::HuffmanNode(HuffmanNode *left, HuffmanNode *right) // Constructor with left and right pointers
{
	weight = left->Weight() + right->Weight(); // Sets left and right values and sets the weight value to be 
	//the sum of the weights of the left and right children
	value = -1; // Internal node and set as an ascii value
}

int HuffmanNode::Value() // Constructor that returns the value of the node
{
	return value;
}

int HuffmanNode::Weight() // Constructor that returns the weight of the children
{
	return weight;
}

HuffmanNode* HuffmanNode::Left() // Constructor that returns left child pointer
{
	return left;
}

HuffmanNode* HuffmanNode::Right() // Constructor that returns right child point
{
	return right;
}

