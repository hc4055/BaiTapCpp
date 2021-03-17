#include <iostream>

using namespace std;

int check ( int n )
{
    int count = 0 , i;

    if ( n <= 1 ) return 0;

	if ( n > 1 )
	{
		for ( i = 2 ; i <= n/2 ; i++)
		{
			if ( n%i ==0 ) count+=1;
		}

		if ( count == 0 ) return 1 ;
		else return 0 ;
	}
}

int main()
{
    int n;

    cin >> n;
    int l = check (n);

    cout << endl << l;

    return 0;
}
