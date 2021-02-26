#include <iostream>

using namespace std;

int main()
{
	int n, count = 0, i;
	
	cin >> n ;
	
	if ( n <= 1 ) cout << "no";
	
	if ( n > 1 )
	{
		for ( i = 2 ; i <= n/2 ; i++)
		{
			if ( n%i ==0 ) count+=1;
		}
		
		if ( count == 0 ) cout << "yes" ;
		else cout << "no" ;
	}
}
