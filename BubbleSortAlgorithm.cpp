#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={41,2,8,62,76};
    // sorting in increasing order 
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
  cout<<"increasing order: ";
    for(const auto i:arr)
    {
        cout<<i<<" ";
    }




    //sorting in decreasing order
    for(int i=0;i<n-1;i++)
    {
            for(int j=0;j<n-1-i;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                }
            }

    }

cout<<endl<<"decreasing order: ";
     for(const auto i:arr)
    {
        cout<<i<<" ";
    }

    return 0;
    
}
