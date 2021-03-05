#include <iostream>
#include <string.h>

using namespace std;

int result;

int check ( int n )
{
	int a[5] , i = 0 , j;
	while ( n > 0 )
	{
		a[i] = n % 10 ;
		n = n / 10 ;
		//cout << "chu so cua vong lap thu " << i+1 << " la " << a[i] << endl;
		//cout << "so N cua vong lap thu " << i+1 << " la " << n << endl;
		i++ ;
		
	}
	
	int l = i  , count = 0 ;
	//cout << "do dai so " << l << endl;
	
	for ( j = 0 ; j < l/2 ; j++)
	{
		if ( a[j] != a[l-1-j] ) count+=1 ;
		//cout << "Vong lap thu " << j+1 << " count = " << count << endl ;
	}
	if ( count == 0 ) result = 1 ;
	else result = 0;
}

int main()
{
	int T;
	cin >> T ;
	int A[T] , B[T] , i ;
	for ( i = 0 ; i < T ; i++)
	{
		cout << "Input No." << i+1 << " : " ;
		cin >> A[i] >> B[i] ;
	}
	for ( i = 0 ; i < T ; i++)
	{
		int output = 0 ;
		if ( A[i] > B [i] )
		{
			int temp;
			temp = A[i];
			A[i] = B[i];
			B[i] = temp;
		}
		
		//cout << A[i] << " , " << B[i] << endl;
		
		int N;
		for ( N = A[i] ; N <= B[i] ; N++)
		{
			check (N);
			output+= result;
			//cout << output << endl;
		}
		
		cout << "Output No." << i+1 << " : " << output << endl;
	}
}
