#include <iostream>
#include <fstream>
#include "HeapNode.h"
//#include "HuffmanNode.h"
#include <queue>

using namespace std;



HeapNode::HeapNode()
{

}

 bool operator<(const HeapNode) const 
  {
    /** the values of x and y in this object instantiation are the
	left hand argument of the <
    **/
    // double myDistanceToOrigin = sqrt(x*x + y*y);
    // int rhsX = rightHandArgument.getX();
    // int rhsY = rightHandArgument.getY();
    // double rhsDistanceToOrigin= sqrt(rhsX * rhsX + rhsY * rhsY);

    // return (myDistanceToOrigin < rhsDistanceToOrigin);
    return HuffmanNodePointer->weight() > HeapNode.value()->weight();
  }

HuffmanNode* HeapNode::Value() // This function feturns the pointer of the HuffmanNode
{
	return *HuffmanNode;
}

void HeapNode::BuildLeaf(int weight, int value) // This function creates a new HuffmanNode with values weight and value
{
	HuffmanNodePointer = new HuffmanNode(weight, value);
}

/*
This function gives pointers to two HuffmanCreates and creates a new 
HuffmanNode pointing at the values H1N and HN2.
*/
void HeapNode::BuildNode(HuffmanNode* HN1, HuffmanNode* HN2) 
{
	HuffmanNodePointer = new HuffmanNode(HN1, HN2)
}

priority_queue<HeapNode> Heaper; // 

  HeapNode insertVal;

  insertVal.setX(0);
  insertVal.setY(5);
  Heaper.push(insertVal);

  insertVal.setX(1);
  insertVal.setY(1);
  Heaper.push(insertVal);

  insertVal.setX(1);
  insertVal.setY(10);
  Heaper.push(insertVal);

  insertVal.setX(1);
  insertVal.setY(0);
  Heaper.push(insertVal);
  
  while (!Heaper.empty())
    {
      HeapNode p = Heaper.top();
      myHeap.pop();
      cout << p.getX() << "," << p.getY() << endl;
    }
  
}
  
