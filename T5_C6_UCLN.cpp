#include <iostream>
#include <cmath>

using namespace std;

int GCD ( int m , int n )
{
    int k , i ;

    if ( n <= m ) k = n ;
    else k = m ;

    for ( i = k ; i >= 1 ; i--)
    {
        if ( m%i == 0 && n%i == 0 ) break;
    }
    return i;
}

int main()
{
    int m,n;

    cin >> m >> n ;
    int i = GCD ( m , n ) ;

    cout << endl << i;

    return 0;
}
