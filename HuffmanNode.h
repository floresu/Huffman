#ifndef _HUFFMANNODE_H
#define _HUFFMANNODE_H

#include <iostream>
#include <fstream>

using namespace std;

class HuffmanNode
{
	private:
	int value; // Initialized as a variable
	int weight; // Initialized asa variable
	HuffmanNode* left; // Left children pointer
	HuffmanNode* right; // Right children pointer

	public:
	HuffmanNode(int weight, int value); // Constructor 
	HuffmanNode(HuffmanNode *left, HuffmanNode *right); // Constructor
	int Value(); // Constructor of Value
	int Weight(); // Constructor of Weight
	HuffmanNode* Left(); // Costructor of Left pointer
	HuffmanNode* Right(); // Constructor of Right pointer
};

#endif

