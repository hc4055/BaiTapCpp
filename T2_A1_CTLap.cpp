#include <iostream>

using namespace std;

int main()
{
	int n;
	
    cout << "Vong lap bang for" << endl << endl;
    
    for ( n = 2 ; n <= 100 ; n++)
    {
    	if ( n % 2 == 0) cout << n << " ";	
    }	
    
    cout << endl << endl << "Vong lap bang while" << endl << endl;
    
    n = 2;
    while ( n <= 100 )
    {
    	if ( n % 2 == 0) cout << n << " ";
    	n++;
	}
    
    cout << endl << endl << "Vong lap bang do-while" << endl << endl;
    
    n = 2;
    do
    {
    	if ( n % 2 == 0) cout << n << " ";
    	n++;
	}
	while ( n <= 100 );
    
    return 0;
}

