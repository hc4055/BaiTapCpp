#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random ( int n )
{
    int h = rand()%n;
    return h;
}

int main()
{
    int n;
    cin >> n;
    for ( int i = 0 ; i < 1000 ; i++ )
    {
        srand ( (int)time(0) + i );
        cout << random (n) << endl;
    }

    return 0 ;
}
