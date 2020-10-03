#include<iostream>
#include<stdio.h>


using namespace std;

void swapi(int a, int b)
{
	int temp = 0;
	a = temp;
	a = b;
	b = temp;
}

int Partition(int a[], int lb, int ub)
{
	int Pivot = a[lb];
	int start = lb;
	int end = ub;

	while (start < end)
	{

		while (a[start] <= Pivot)
		{
			start++;
		}
		while (a[end] > Pivot)
		{
			end--;
		}
		if (start < end)
		{
			swap(a[start], a[end]);
		}
	}
	swap(a[lb], a[end]);
	return end;
}

void QuickSort(int a[], int lb, int ub)
{
	if (lb < ub)
	{
		int loc = Partition(a, lb, ub);
		QuickSort(a, lb, loc - 1);
		QuickSort(a, loc + 1,ub);

	}
}

int main()
{
	int arr[] = { 7,6,10,5,9,2,1,15,7};

	QuickSort(arr, 0, 8);
	
	for (int i = 0; i <= 8; i++)
	{
		std::cout << arr[i] << endl;
	}
	cout << "Hello World!";
	return 0;
}
