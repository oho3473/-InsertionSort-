#include<iostream>

void PrintArray(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << input[i] << " ";
	}
}

void Swap(int& x, int&y)
{
	int temp = x;
	x = y;
	y = temp;
}

void InsertionSort(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		int j = i;
		int target = input[i];

		while (--j >= 0 && target < input[j])
		{
			input[j + 1] = input[j];
			input[j] = target;
		}
	}
}


int main()
{
	int array[5]{ 8,7,2,3,1 };

	InsertionSort(array, 5);

	PrintArray(array, 5);
}