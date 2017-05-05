#include<iostream>
using namespace std;
int Min(int * numbers, int length)
{
	int MinInOrder(int* numbers,int index1, int index2);
	if(numbers == NULL && length <=0)
	{
		//throw new std::exception("Invalid parameters");
		cout << "the number or length has problem" << endl;
		return -1;
	}
	
	int index1 = 0;
	int index2 = length - 1;
	int indexMid = index1;
	while(numbers[index1] >= numbers[index2])
	{
		if(index2 - index1 == 1)
		{
			indexMid = index2;
			break;
		}
		
		indexMid = (index2 + index1)/2;
		if(numbers[indexMid] > numbers[index1])
		{
			index1 = indexMid;
		}
		else if(numbers[indexMid] < numbers[index2])
		{
			index2 = indexMid;
		}
		
		if(numbers[index1] == numbers[indexMid] && numbers[index2] == numbers[indexMid])
		{
			return MinInOrder(numbers, index1, index2);
		}
	}
	return numbers[index2];
}

int MinInOrder(int* numbers, int index1, int index2)
{
	int result = numbers[index1];
	for(int i = index1 + 1; i <= index2; i++)
	{
		if(numbers[i] < result)
		{
			result = numbers[i];
		}
	}
	return result;
}

int main()
{
	int number[1000] = {0};
	int length = 0;
	cin >> length;
	for(int i=0; i<length; i++)
	{
		cin >> number[i];
	}
	cout << "min of nubmer is" << Min(number, length) << endl;
	return 0;
}
