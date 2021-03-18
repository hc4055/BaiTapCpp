#include <iostream>
#include <cmath>

using namespace std;

// using ceil/floor
int rnd ( double x )
{
    if ( x >= 0 )
    {
    if ( x - (int)x >= 0.5 ) return (int)ceil(x) ;
    else return (int)floor(x) ;
    }
    else
    {
    if ( abs(x) - abs((int)x) <= 0.5 ) return (int)ceil(x) ;
    else return (int)floor(x) ;
    }
}

// not using ceil/floor

int rnd2 ( double x )
{
    if ( x >= 0 )
    {
    if ( x - (int)x >= 0.5 ) return (int)(x+1) ;
    else return (int)x ;
    }
    else
    {
    if ( abs(x) - abs((int)x) <= 0.5 ) return (int)x ;
    else return (int)(x-1);
    }
}

int main()
{
    double x ;
    cin >> x ;

    int k = rnd (x) ;
    cout << k << endl ;

    int q = rnd2 (x) ;
    cout << q << endl ;

    return 0 ;
}
