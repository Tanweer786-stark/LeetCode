class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<=0) return false;  //Recursion base Corner Condition
        if(n%4!=0) return false;
        return isPowerOfFour(n/4); //Not effect on ti,e complexity
    }
};