#include <iostream>

using namespace std;

int main()
{
	int n, i, j, count=0;
	cin >> n;
    int a[n];
    
    for ( i = 0 ; i < n ; i++)
    {
    	cin >> a[i];
	}
    
    for ( i = 0 ; i < n-1 ; i++)
    {
    	for ( j = i+1 ; j < n ; j++)
    	{
    		if ( a[i] == a [j]) count+=1;
    	}
    }
    
    if ( count = 0) cout << "Yes";
    else cout << "No";
		
    return 0;
}


