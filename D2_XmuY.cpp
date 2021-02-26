#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int y,i;
	double x,m, k=1;
	
	cin >> x >> y ;
	
	for ( i = 0 ; i < y ; i++ )
	{
		k*=x;
	}
	
	cout << "x^y = " << k << endl;
	
	// kiem tra
	
	m = pow(x,y);
	
	cout << "m = pow (x,y) = " << m;
}
