#include <iostream> 

int main(){
	char ascii = 'A';
	for (int j=0; j<50; j++)
	{
		char a = ascii+j; 
		std::cout << j << " : " << a << std::endl ;
	}
}
