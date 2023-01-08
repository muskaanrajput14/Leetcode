// 4 - Median of 2 sorted arrays

#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    int m = nums1.size();
    int n = nums2.size();
    int finalArray[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if(nums1[i] < nums2[j])
        {
            finalArray[k++] = nums1[i++];
        }
        else
        {
            finalArray[k++] = nums2[j++];
        }
    }
    
    while(i < m)
    {
        finalArray[k++] = nums1[i++];   
    }

    while(j < n)
    {
        finalArray[k++] = nums1[j++];   
    }

    n = m + n;
    //odd length
    if(n % 2 == 0)
    {
        return finalArray[(n/2)-1];
    }
    else
    {
        return ((float)finalArray[(n/2) - 1]) + ((float)finalArray[(n/2)])/2;
    }
}

int main()
{
    // int nums1[] = {1,4,7,10,12};
    // int nums2[] = {2,3,6,15};
    // int m = sizeof(nums1)/sizeof(nums1[0]);
    // int n = sizeof(nums2)/sizeof(nums2[0]);
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(4);
    nums1.push_back(7);
    nums1.push_back(10);
    nums1.push_back(12);

    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(6);
    nums2.push_back(15);
    nums2.push_back(20);
    cout<<"The median of two sorted array is "<<fixed<<setprecision(5)<<findMedianSortedArrays(nums1,nums2);
    return 0;
}