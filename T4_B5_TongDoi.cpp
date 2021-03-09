#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    int n , i , j;
    cout << " So phan tu cua day so la : ";
    cin >> n;
    cout << endl ;

    double a[n] ;

    for ( i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }

    for ( i = 0 ; i < n-1 ; i++ )
    {
        for ( j = i+1 ; j < n ; j++ )
    {
        if ( a[i] + a[j] == 0 && i != j ) cout << a[i] << " & " << a[j] <<endl;
    }
    }
}
