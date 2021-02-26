#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, y, z, p, temp=0;
	
	cin >> x >> y >> z ;
	
	if ( x <= 0 || y <= 0 || z <= 0) cout << "invalid";
	else if ( x >= y+z || y >= x+z || z >= x+y ) cout << "invalid";
	else
	{
		p=x+y+z;
		cout << "Chu vi tam giac :" << p << endl;
		
		if ( x==y && y==z ) cout << "Tam giac deo" ;
		
		else 
		{
		if ( x==y || y==z || x==z) temp+=1;
		
		if ( x*x == y*y + z*z || x*x + y*y == z*z || x*x + z*z == y*y) temp+=10;
		}
		
		if ( temp == 1 ) cout << "Tam giac can" ;
		
		else if ( temp == 11 ) cout << "Tam giac vuong can" ;
		
		else if ( temp == 10 ) cout << "Tam giac vuong" ;
	}
}
