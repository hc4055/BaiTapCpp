#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int minN, int maxN)
	{
    	return minN + rand() % (maxN + 1 - minN);
	}

void sapxep(int a[], int n)
{	
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
	        if(a[i] > a[j]) 
	        {
	        	int temp;
	        	temp = a[i];
	        	a[i] = a[j];
	        	a[j] = temp;
			}
	   	}
	}
}
int main()
{
    srand ( (int) time(0) ) ;
    
    int a[30] , i ;
    
    for ( i = 0 ; i < 30 ; ++i )
    {
        a[i] = random(1,100);
    }
	    
    for( i = 0 ; i < 30 ; ++i )
	{
        cout << a[i] << " " ;
    }   
	 
    sapxep ( a , 30 ) ;
    
    cout << endl ;
    
    for( i = 0 ; i < 30 ; ++i )
	{
        cout << a[i] << " " ;
    }    
    
}

