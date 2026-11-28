#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>array={5,8,7,4};
    int n=array.size();
    /*reverse(array.begin(),array.end());*/
    //without reverse function 
    int start=0;
    int end=n-1;
    while(start<end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
    for(auto i: array)
    {
        cout<<i<<endl;
    }
    return 0;
}