#include<iostream>
#include<vector>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
	int start=0;
	int end=n-1;
while(start<=end)
{
	if(nums[start]+nums[end]==target) 
    {
        return {start,end};
    }
    if(nums[start]+nums[end]>target )
    {
        end--;
    }
     else
     {
        start++;
     }
}
 return {};
    }
int main(){
	vector<int>array={2,7,11,15};
	int target=9;
	vector<int>result=twoSum(array,target);
    cout<<result[0]<<" "<<result[1];
    return 0;
}