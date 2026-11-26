#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    vector<int>arr={1,5,6,8,9};
    int n=arr.size();
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    cout<<mini<<endl;
    cout<<maxi;
    return 0;
}