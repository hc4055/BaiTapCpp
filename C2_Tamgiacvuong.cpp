#include <iostream>

using namespace std;

int main()
{
	int n, i, k, j, m;
	
	cin >> n ;
	
	m=n;
	
	for ( i = 0 ; i < n ; i++)
	{
		for ( k = 0 ; k < i ; k++)
		{
			cout << " ";
		}
		for ( j = m ; j > 0 ; j-- )
		{
			cout << "*";
		}
		m-=1;
		cout << endl;
	}
}
