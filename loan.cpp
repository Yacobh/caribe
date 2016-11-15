/*
	Name: 
	Copyright: 
	Author: 
	Date: 15-11-16 00:36
	Description: 
*/

#include <iostream>
using namespace std;


/*A finance company provides loans for motorcycles at different 
rates depending on how much the total loan amount is and how 
many payments will be made on the loan. Using the information 
in the table below, write a program that will calculate 
the monthly payment based on user inputs of loan amount and 
number of monthly payments. The user will NOT input the 
percentage rate, as this will be determined by the program code 
based on user input of loan amount and number of payments. 

The output will display the loan amount, number of payments, 
monthly payments and the interest rate of the loan. Use a loop 
to allow users to enter as many sets of data as desired. 
At the end of each loop, ask the user if he or she would like 
to Exit the program (Y for Yes or N for No). 
If yes, clear the variables and repeat the input, processing 
and output loop. If no, exit the program.
*/
int inputData(int d[2]);
float processData(int d[2]);
int outputPayments(int d[2], float payMonth);

int main()
{
		char exit='N';
		int data[2];
		while(exit!='Y') 
		{
			inputData(data);
			float monthly = processData(data);
			outputPayments(data, monthly);
			cout << "Would you like to Exit the program ? (Y for Yes or N for No)" <<endl;
			cin.ignore();
			cin >> exit;
			//cout << "exit is " << exit;
		}
	return 0;
}

int inputData(int d[2])
{
	cout << "how much the total loan amount is "<< endl;
	cin >> d[0];
	cout << "and how many payments will be made on the loan " << endl;
	cin >> d[1];
}

float processData(int d[2])
{
	int aux[2];
	aux[1]=d[1];
	if(d[0]>=500 && d[0]<=2500) 
	{
		if(d[1]>=6 && d[1]<=12) 
		{
			aux[0]=8; //  Rate 8%
		} 
		else if (d[1]>=13 && d[1]<=36) 
		{
			aux[0]=10; //  Rate 10%	
		}
		else if (d[1]>=37 && d[2]<=48)
		{
			aux[0]=12;
		}
		else cout << "We do not finance that number of payments" <<endl;		
	} 
	else if (d[0]>=2501 && d[0]<=10000) 
	{
		if(d[1]>=6 && d[1]<=12) 
		{
			aux[0]=7;
		} 
		else if (d[1]>=13 && d[1]<=36) 
		{
			aux[0]=8;
		}
		else if (d[1]>=37 && d[2]<=48)
		{
			aux[0]=6;
		}
		else cout << "We do not finance that number of payments" <<endl;		
			
	}
	else if (d[0]>=10001)
	{
		if(d[1]>=6 && d[1]<=12) 
		{
			aux[0]=5;
		} 
		else if (d[1]>=13 && d[1]<=36) 
		{
			aux[0]=6;
		}
		else if (d[1]>=37 && d[2]<=48)
		{
			aux[0]=7;
		}
		else cout << "We do not finance that number of payments" <<endl;		
		
	}
	else cout << "We do not finance loans below $500." <<endl;
	float monthly = ((float)d[0]*(1+(float)aux[0]/100))/aux[1];
	d[0]=aux[0];
	d[1]=aux[1];
	return monthly;
}


int outputPayments(int d[2], float payMonth)
{
	cout << "the rate is " << d[0] <<endl;
	cout << "the payment monthly is " << payMonth <<endl;
	return 0;
}

