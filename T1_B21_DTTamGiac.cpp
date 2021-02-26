#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
	double a, b, c, s, area ;
	cin >> a >> b >> c;
	if( a+b>c && b+c>a && a+c>b ) 
	{
	s = ( a + b + c ) / 2 ;
	area = sqrt ( s* (s-a) * (s-b) * (s-c) ) ;
	cout << area ;
	} 
	return 0;
}	
