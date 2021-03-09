#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    int n , i;
    cout << " So phan tu cua day so la : ";
    cin >> n;
    cout << endl ;

    double a[n] , s = 0 ;

    for ( i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }

    for ( i = 0 ; i < n ; i++ )
    {
        s+= a[i] ;
    }

    s = s / n ;

    cout << "Gia tri TB cua day so la: " << s << endl;

    double ps = 0 ;

    for ( i = 0 ; i < n ; i++ )
    {
        ps+= ( a[i] - s ) * ( a[i] - s ) ;
    }

    ps = ps / ( n - 1) ;

    cout << "Phuong sai cua day so la: " << ps << endl;

}
