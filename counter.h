#ifndef _COUNTER_H
#define _COUNTER_H

#include <fstream>
#include <vector>
#include <string>

using namespace std;

class counter 
{
private:

public:
	counter(); // Constructor 
	vector <int> getFileStream(string filename); // Calls the "getFilesStream" from cpp file

};

#endif