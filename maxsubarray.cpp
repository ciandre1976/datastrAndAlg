#include<iostream>

int sum(int a[],int i,int j)
{
    int max=0;
    for (size_t i = 0; i <= j; i++)
    {
       int sum=a[i]+a[j];
       if(sum>max)
        {
          max=sum;
        }
    };
    return max; 
};

int main()
{
    int num[] = {-2,1,-3,4,-1,2,1,-5,4};

    int x=sum(num,num[0],num[2]);


///std::cout<<x;
std::cout<<"hello";
   
}