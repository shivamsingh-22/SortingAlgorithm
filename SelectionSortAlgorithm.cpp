#include<iostream>
using namespace std;;
int main()
{
    int n=5;
    int arr[n]={14,54,6,5,1};
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        // check min index 
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }

        }  
        // swap min element with current element
        swap(arr[min_index],arr[i]);
    }
 
 cout<<"increasing order: "<<endl;
    for(const auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}