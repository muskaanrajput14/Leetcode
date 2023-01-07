#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int current = 0, total_gas = 0, total_cost = 0, start_index = 0;

        for(int i =0; i < gas.size(); i++)
        {
            total_gas += gas[i];
        }

        for(int i =0; i < cost.size(); i++)
        {
            total_cost += cost[i];
        }

        if(total_gas < total_cost)
        {
            return -1;
        }

        for(int i =0; i < gas.size(); i++)
        {
            current += (gas[i] - cost[i]);
            if(current < 0)
            {
                start_index = i+1;
                current =0;
            }
        }
        return start_index;
    }
};

int main()
{
    Solution sol_obj;
    vector<int> gas{1,2,3,4,5};
    vector<int> cost{3,4,5,1,2};
    cout<<sol_obj.canCompleteCircuit(gas, cost);
    return 0;
}