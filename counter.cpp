#include <iostream>
#include <fstream>
#include <vector> 
#include <string>
#include "counter.h"
using namespace std;

const int PSEUDOEOF = 256;

counter::counter()
{

}

vector <int> counter::getFileStream(string filename)
{
	//string filename = "testingthefile.txt";
	ifstream infile;
	infile.open(filename.c_str()); // waaah
	/** while peeking ahead does not reveal end of file **/
	
	vector <int> characters (257); // Initializing the number of elements

	// This while loop gets the character and then it adds 1 to the spotted character
	// Then it looks at the next character until there is not character
	while(infile.peek() && !infile.eof())
	{
		char ch = infile.get();
		characters[ch] = characters[ch] + 1;
	}
	return characters; // Returns the number of times each character appears
}
