#include <iostream>
#include <fstream>
#include <queu>

#include "counter.h"

using namespace std;

int main()
{
	counter input; // Creates an object for the counter class
	vector <int> getFileStream; // 
	getFileStream = input.getFileStream("testingthefile.txt"); // Calls the "getFileStream" method from counter
	// to count frequency of the characters

	// This is the output section. This loop outputs the frequencies and counted characters. 
	for (int i = 0; i < getFileStream.size(); i++)
	{
		cout << (char) i << getFileStream[i] << endl;
	}
	return 0; // Returns 0 if no characters are counted.

}