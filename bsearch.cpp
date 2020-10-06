
#include <iostream>


int Search(int arr[],int target,int l,int h)
{
    while(l<=h)
    {
        int med = (l + h) / 2;

        if (arr[med] == target)
        {
            std::cout <<"found at: "<<med;
            return med;
        }
        else if (arr[med] < target)
        {
            l = med + 1;
        }
        else if (arr[med] > target)
        {
            h = med - 1;
        }
      
    }
    std::cout << "no elem";
    return -1;

}

int main()
{
    int arr[] = { 1,2,66,77,88 };

    Search(arr,88, 0, 4);

}

