#include <iostream>

using namespace std;

string st;
char a[100];
int b[100];
int n;
int hv( int x )
{
	for( int i = 0 ; i <= n-1 ; i++ )
		{
			if( b[i] == 0 )
			{
			b[i]=1;
			a[x] = st[i];

			if ( x==n )
			{
				for (int t=1; t<=n; t++)
                    cout<<a[t];
                    cout<<endl;
			}

			else hv(x+1);
			b[i] = 0;
            }
		}
	return 0 ;
}
int main()
{
    cin >> st;
    n=st.length();
    hv(1);
    return 0;
}
