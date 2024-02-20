//  Question--- https://leetcode.com/problems/reverse-integer/description/
// code
class Solution {                      
public:
    int reverse(int x) 
    {
        long reverse = 0;     
        while(x)
        {
            long lastDigit = x % 10;
            reverse = reverse*10 + lastDigit; // find reminder and add its to r
            x=x/10;     // Update the value of x
        }
        if(reverse >INT_MAX || reverse <INT_MIN) return 0; // check 32 bit range 
        return int(reverse);
    }
}; 
