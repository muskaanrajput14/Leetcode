#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
        int n = nums.size();
        int reach = 0;
        for(int i = 0; i < n; i++)
        {
            if(reach < i) 
            {
                return 0;
            }
            else
            {
                reach = max(reach , nums[i] + i);   
                cout<<"The value of reach at index i "<<i<<" is : "<<reach<<endl;
            }
        }
        return 1;
    }

int main()
{
    vector<int> nums{2,3,1,1,4};
    cout<<canJump(nums);
    return 0;
}