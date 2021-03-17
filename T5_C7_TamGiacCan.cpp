#include <iostream>

using namespace std;

void in ( int m , int n )
{
    for ( int j = 0 ; j < m ; j++ )
    {
        cout << " ";
    }
    for ( int j = 0 ; j < n ; j++ )
    {
        cout << "*";
    }
}

int main()
{
	int n, i, j, k;

	cin >> n ;

	for ( i = 0 ; i < n ; i++ )
	{
	    in ( n-1-i , 2*i+1 ) ;
		cout << endl;
	}
}
