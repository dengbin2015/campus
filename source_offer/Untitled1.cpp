#include<iostream>
using namespace std;
int main()
{
	char string_a[1000] = {'\0'};
	char a;
	gets(string_a);
	a = getchar();
	char* a_point = string_a;
	int a_num = 0;
	while(*a_point)
	{
		if(*a_point == a || *a_point == a + 'a' - 'A' || *a_point == a + 'A' - 'a')
		{
			a_num++;
		}
		a_point++;
	}
	cout << a_num;
	return 0;
}
