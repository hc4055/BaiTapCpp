#include <iostream>

using namespace std;

int main()
{
	int i;
	
	string f0 = "a" , f1 = "b" , f2 = f0 + f1 ;
	
	cout << "f0: " << f0 << endl << "f1: " << f1 << endl << "f2: " << f2 << endl ;
	
	for ( i = 0; i < 8 ; i++ )
		{
			f0 = f1;
			f1 = f2;
			f2 = f1 + f0;
			cout << "f" << i+3 << ": " << f2 << endl ;
		}
}	
