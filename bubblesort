#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubble(vector<int>& arr)
{
    int n =arr.size();
    for(int i=0;i<n-1;i++)
    {   bool swapped=false;//best case 
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]) 
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}

int main()
{
    vector<int>arr={1,9,7,2,4,6};
    bubble(arr);
    for(int x:arr)
    {
        cout<<x<<endl;
    }
    return 0;
}