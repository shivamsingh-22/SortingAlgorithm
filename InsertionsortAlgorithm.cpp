#include<iostream>
using namespace std;
int main()
{
    int v[5]={14,24,25,21,45};

    // INCREASING  order 
    for(int i=1;i<5;i++)
    {
        int key =v[i];
        int j=i-1;
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j=j-1;
        }
        v[j+1]=key;
    }
    for(const auto i:v)
    {
    cout<<i<<" ";
}
} 
