#include <iostream>
using namespace std;
int main()
{
	char a[5000] = {'0'};
	//cin >> a;
	gets(a);
	///cout << a << endl;
	char* a_p = a;
	char* b_p = a_p;
	int a_size = 0;
	while( *a_p)
	{
		a_size++;
		a_p++;
	}
	a_p = a_p -1 ;
	//cout << *a_p << endl;
//	int black_num = 0;
//	while(*b_p++)
//	{
//		if(*b_p == ' ')
//		{
//			black_num++;
//		}
//	}
//	if(black)
	int b_size = 0;
//	while( *a_p != ' ')
	while((*a_p >='a' && *a_p <='z') || (*a_p >='A' && *a_p <='Z'))
	{
		a_p--;
		b_size++;
	}
	cout << b_size << endl;
	return 0;
}

