#include<iostream>
#include<vector>
using namespace std;
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if( nums[i] > nums[(i+1)%n])
            count++;
        }
        if(count>1) return false;
        else return true;
    }
int main()
{
    vector<int>array={3,4,5,1,2};
    cout<<check(array);

    return 0;
}