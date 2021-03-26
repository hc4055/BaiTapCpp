#include <iostream>

using namespace std;

int a[100];
int b[100];
int n;

void th(int x)
{
	for(int i = 1 ; i <= n ; i++)
		{
			if( b[i] == 0 )
			{
			b[i] = 1;
			a[x] = i;

			for(int t=1; t<=x; t++) cout<<a[t]<<" ";
            cout<<endl;

			if ( x+1 <= n ) th( x+1 );
			b[i] = 0;
            }
		}
}
int main()
{
  	cin>>n;
    th(1);
    return 0;
}
