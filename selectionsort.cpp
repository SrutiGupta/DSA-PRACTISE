#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void selection(vector<int>&arr)
{
    int n= arr.size();
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
         swap(arr[i],arr[minindex]);
    }
}

int main()
{
    vector<int>arr={1,8,7,3,2};

    selection(arr);

    for(int i:arr)
    {
        cout<<i;
    }

    return 0;
}