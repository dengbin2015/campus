#include<iostream>
using namespace std;
int main()
{
	int a = -1;
	for(int i = 0; i <=7; i++)
	{
		a = a >> 1;
		cout << a << endl;
	}
	return 0;
}
