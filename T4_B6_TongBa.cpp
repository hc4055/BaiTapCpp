#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    int n , i , j, k;
    cout << " So phan tu cua day so la : ";
    cin >> n;
    cout << endl ;

    double a[n] ;

    for ( i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }

    for ( i = 0 ; i < n-2 ; i++ )
    {
        for ( j = i+1 ; j < n-1 ; j++ )
        {
            for ( k = j+1 ; k < n ; k++ )
            {
                if ( a[i] + a[j] + a[k] == 0 && i != j && j != k ) cout << a[i] << " & " << a[j] << " & " << a[k] <<endl;

            }
        }
    }

}
