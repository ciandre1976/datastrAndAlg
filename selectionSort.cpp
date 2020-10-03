
#include <iostream>
#include <array>

int main()
{
	//selection sort

	int arr[] = { 1,2,45,6,7,8,9,78};
	int index = 8;
	int pom = 0;

	for ( int i= 0;  i <index-1 ;  i++)
	{
		int max = i;
		for (size_t j = i+1; j < index; j++)
		{
			if (arr[max] < arr[j])
			max = j;
		}
		pom = arr[i];
		arr[i] = arr[max];
		arr[max] = pom;
	}

	for (size_t i = 0; i < 7; i++)
	{
		std::cout << arr[i]<<std::endl;
	}
}

