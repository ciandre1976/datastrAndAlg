#include<iostream>
#include<math.h>


int maxSuma(int x[])
{
	int max = 0, cur_max = 0;

	for (size_t i = 1; i <= 6; i++)
	{
		cur_max = fmax(x[i], cur_max + x[i]);
		max = fmax(max, cur_max);
	}
	return max;
}


int main()
{
    int num[] = { -2,1,-3,4,2,-1,-15 };
	int max = maxSuma(num);
	std::cout << "Max contigues sum: " << max;;
}

