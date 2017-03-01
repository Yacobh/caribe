#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	
  // Declaration of variables
  char identifier[4];
  int  running[4], swimming[4], biking[4];
  int total[4];
  
  // Name of the file
  string fileName="racedat.txt";
  // stream to open the file
	ifstream fin; 
  //open the file
	fin.open (fileName);
	if(fin.is_open())
	{
   // load the data
		for (int i=0; i<4; i++)
    {
      fin >> identifier[i];
      fin >> running[i];
      fin >> swimming[i];
      fin >> biking[i];
    }
    
    //calculate the total time for each competitor
    for (int i=0; i<4; i++)
    {
      total[i]=running[i]+swimming[i]+biking[i];
    }
    
    //print the results
    cout << "Competitor\t\tRunning time\t\tSwimming time \t\tBiking Time\t\tTotal time " <<endl; 
  	for (int i=0; i< 4; i++)
  	{
	    cout <<  identifier[i]<<  "\t\t\t"<<  running[i]<<  "\t\t\t"<< swimming[i]<<  "\t\t\t"<< biking[i] <<  "\t\t\t"<<total[i]<< endl;
	  } 
	} else cout << "unable to open the file";
	fin.close();
	return 0;
}
