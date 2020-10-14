#include<iostream>


using namespace std;

void Merg(int a[],int b[],int m,int n)
{
	int size = m + n;
	int c[8];
	int i = 0;
	int j = 0;
	int k = 0;

	while (i<n&&j<m)
	{
		if (a[i] <= b[j])
		{
			c[k] = a[i];
			i++;
			k++;
		}
		else
		{
			c[k] = b[j];
			j++;
			k++;
		}
		
	}
	while (i < 4)
	{
		c[k] = a[i];
		i++;
		k++;
	}

	while (j < 4)
	{
		c[k] = b[j];
		j++;
		k++;
	}

	cout << "Mergerd:\n";

	for (int i = 0; i < 8; i++)
	{
		
		printf("%i", c[i]);
	}

}


int main()
{
	int a[] = { 1,3,5,6 };
	int b[] = { 1,7,8,9 };

	Merg(a,b,4,4);
	return 0;
}