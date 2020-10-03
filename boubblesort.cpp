
#include <iostream>
#include <array>

int main()
{
	//boublesort

	int arr[] = { 1,2,45,6,7,8,9,78,12};
	int index = 9;
	int pom = 0;

	for ( int i= 0;  i <index-1 ;  i++)
	{	
		for (size_t j = i+1; j < index; j++)
		{
			if (arr[i] < arr[j])
			{
				pom = arr[j];
				arr[j] = arr[i];
				arr[i] = pom;
			}
			
		}
		
	}

	for (size_t i = 0; i < 7; i++)
	{
		std::cout << arr[i]<<std::endl;
	}
}

