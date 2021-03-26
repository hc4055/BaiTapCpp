#include<iostream>

using namespace std;

long F ( int n )
{
 if ( n == 0 ) return 0;
 if ( n == 1 ) return 1;
 return F(n-1) + F(n-2);
}
int main ()
{
	int a;
	cin >> a;
	while(a < 0)
    {
		cout << "a = ";
		cin >> a;
	}
	for( int i=0 ; i<=a ; i++ )
	cout << F(i) << " ";
	return 0;
}
