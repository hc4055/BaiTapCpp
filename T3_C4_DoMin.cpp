#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	int m , n , i , j , count ;
	cin >> m >> n ;
	
	char a[m][n] , b[m][n];
	
	for ( i = 0 ; i < m ; i ++)
	{
		for ( j = 0 ; j < n ; j++)
		{
			cin >> a[i][j] ;
		}
	}
	
	/*
	for ( i = 0 ; i < m ; i ++)
	{
		for ( j = 0 ; j < n ; j++)
		{
			cout << a[i][j] <<" " ;
		}
		cout << endl;
	}
	*/
	
	for ( i = 0 ; i < m ; i ++)
	{
		for ( j = 0 ; j < n ; j++)
		{
			if ( a[i][j] == 42 ) b[i][j] = a[i][j] ;
			else 
			{
				count = 0 ;
				if ( a[i+1][j] == 42 ) count+= 1 ;
				if ( a[i-1][j] == 42 ) count+= 1 ;
				if ( a[i][j+1] == 42 ) count+= 1 ;
				if ( a[i][j-1] == 42 ) count+= 1 ;
				if ( a[i+1][j+1] == 42 ) count+= 1 ;
				if ( a[i+1][j-1] == 42 ) count+= 1 ;
				if ( a[i-1][j+1] == 42 ) count+= 1 ;
				if ( a[i-1][j+1] == 42 ) count+= 1 ;
				b[i][j] = count + 48 ;
			}
		}
	}
	
	for ( i = 0 ; i < m ; i ++)
	{
		for ( j = 0 ; j < n ; j++)
		{
			cout << b[i][j] <<" " ;
		}
		cout << endl;
	}
}
