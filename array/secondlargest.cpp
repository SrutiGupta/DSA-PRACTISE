#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr={1,5,6,7,93};
    int n=arr.size();
    int maxi=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>maxi)
        {
            second=maxi;
            maxi=arr[i];
        }
        else if (arr[i]>second && arr[i]<maxi)
        {
            second=arr[i];
        }
    }
cout<<second;
return 0;

}