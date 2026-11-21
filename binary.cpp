#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int> &arr,int target)
{
    int n=arr.size();
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    vector<int>arr={1,2,5,9,10};
    int result=binary(arr,5);
    cout<<"result is"<<result;
    return 0;
}