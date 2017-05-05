#include<stdio.h>

int item[1000] = {0};

bool huiwen(int item[],int iterm_len)
{
	//еп╤ойг╥Я╩ьнд
	int i;
	for (i=0; i<iterm_len/2; i++)
	{
		if (item[i] != item[iterm_len-1-i])
		{
			return false;
		}
	}
	return true;
}

void sum_arrud(int *item[i],int *item_len)
{
	*item[i] = *item[i] + *item[i+1];
	int i;
	while (*item_len)
	{
		*item[i] = *item[i+1];
		i++;
	}
}

int main()
{
	int n, i;
	scanf_s("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf_s("%d",&item[i]);
	}

	for (i=0; i<n; i++)
	{
		sum_arrud(&i,&(i+1))
	}

	return 0;
}