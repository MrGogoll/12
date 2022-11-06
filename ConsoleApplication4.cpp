
#include <iostream>
using namespace std;
int main()
{
    int n;
	int  a,b;
	b = 0;
	cin >> n;
	for  (int i = 0;  i < n; i++)
	{
		cin >> a;
		b += a;
	}
	cout << b / n;
}

