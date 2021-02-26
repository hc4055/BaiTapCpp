#include <iostream>

using namespace std;

int main()
{
	int n, i, j, k;
	
	cin >> n ;
	
	for ( i = 1 ; i <= n ; i++ )
	{
		for ( j = i ; j <= n ; j++ )
		{
			cout << j << " " ;
		}
		for ( k = 1 ; k < i ; k++ )
		{
			cout << k << " " ;
		}
		cout << endl;
	}
}
