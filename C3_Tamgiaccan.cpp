#include <iostream>

using namespace std;

int main()
{
	int n, i, k, j, m;
	
	cin >> n ;
	
	for ( i = 0 ; i < n ; i++ )
	{
		for ( k = 0 ; k < n-1-i ; k++)
		{
			cout << " "; 
		}
		
		for ( j = 0 ; j < 2*i+1 ; j++ )
		{
			cout << "*"; 
		}
		
		cout << endl;
	}
}
