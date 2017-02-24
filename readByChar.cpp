#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;




int main() {
	// Name of the 
    string filename;	
	//cout << "Insert the name of the file to open" << endl;
	//cin >> name;
	filename = "names.txt";
	
	char buffer[8];
	ifstream fin; 
	fin.open (filename);
    if(fin.is_open())
    {
     	char aux;
    	while (fin >> aux)
    	{
        	cout << aux << endl;
			}
	}

	fin.close();
	return 0;
}
