#include <iostream>

using namespace std;

int main()
{
	int a[5] , i , j ;
	
	for ( i = 0 ; i < 5 ; i++ ) cin >> a[i] ;
	
	int temp;
	
	for ( i = 0; i < 5; i++)
	{
		for ( j = i+1; j < 5; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}	
	}
	
	cout << endl << a[2];
}
