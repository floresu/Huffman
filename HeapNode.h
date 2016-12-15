#ifndef _HEAPNODE_H
#define _HEAPNODE_H

#include <fstream>
#include <iostream>
#include "HuffmanNode.h"

using namespace std;

class HeapNode
{
	private:
		int weight;
		int value;
		//HuffmanNode* == HeapNode;
	public:
		HeapNode();
		bool operator<(const HeapNode) const;
		HuffmanNode* Value();
		void BuildLeaf(int weight, int value);
		void BuildNode(HuffmanNode* HN1, HuffmanNode* HN2);

};

#endif

