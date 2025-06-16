class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        // Initilize all no. is a prime no.
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;
        //prime
        for(int i =2; i<n; i++){
            if(prime[i]){
                cnt++;
                //non prime
                for(int j = 2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};