#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int input_array[1000] = {0};
	int input_array_t[1000] = {0};
	for(int i=0; i<n; i++)
	{
		cin>>input_array[i];
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			int temp;
			if(input_array[j] > input_array[j+1])
			{
				temp = input_array[j];
				input_array[j] = input_array[j+1];
				input_array[j+1] = temp;
			}
		}
	}
	int input_array_t_num = 0;
	for(int i=0; i<n; i++)
	{
		if(input_array[i] == input_array[i+1])
		{
			continue;
		}
		else
		{
			input_array_t[input_array_t_num] = input_array[i];
			input_array_t_num++;
		}
	}
	for(int i=0; i<input_array_t_num; i++)
	{
		cout << input_array_t[i]<<endl;
		//cout << " ";
	}
	return 0;
}
