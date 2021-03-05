#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    cin >> s;
    
    int l = strlen(s) , i , count=0 ;
    for ( i = 0 ; i < l/2 ; i++)
    {
    	if ( s[i] != s[l-1-i] ) count+=1 ;
	}
	
	if ( count == 0 ) cout << "Yes" ;
	else cout << "No" ;
}

