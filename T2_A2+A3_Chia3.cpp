#include <iostream>

using namespace std;

int main()
{
	int k, n;
	
	cin >> n ;
	
    cout << endl << endl << "Vong lap bang while" << endl << endl;
    
    k=n;
    while ( k >= 3 )
    {
    	k = k / 3 ; 
	}
	cout << "Gia tri cuoi cung cua k: " << k ;
    
    cout << endl << endl << "Vong lap bang do-while" << endl << endl;
    
    k=n;
    if ( k >=3 )
    {
		do
	    {
	    	k = k / 3 ;
		}
		while ( k>=3 );
	}
	
    cout << "Gia tri cuoi cung cua k: " << k ;
    
	return 0;
}

