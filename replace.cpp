#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	// Name of the file
    string fileName1, word1, word2;	
	cout << "Insert the name of the file to read" << endl;
	cin >> fileName1;
	cout << "Insert the Word  to be search " << endl;
	cin >> word1;
	cout << "Insert the Word  to replace " << endl;
	cin >> word2;
	ifstream fin; 
	fin.open (fileName1);
	if(fin.is_open())
	{
		string word;
		 while ( fin >> word)
    	{
   			if (word==word1) word=word2;
			cout << word<< endl;        
    	}
	} else cout << "unable to open the file";
	fin.close();
	return 0;
}
