#include <iostream>

using namespace std;

void recursive(int n)
{
	int i;
    int f[100000];
    i++;
    cout << i << endl;
    recursive(n);
}
int main()
{
    int i = 0;
    int n;
    cin >> n;
    recursive(n);
    return 0;
}
