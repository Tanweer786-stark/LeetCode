class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map< int , int> mp; 
        
        for(int &x : arr){ 
            mp[x]++;
        }
        unordered_set<int>st;
        for(auto &it : mp){
            int freq = it.second; // it.second contains frequency & it.first contains number
            if(st.find(freq) != st.end()){
                // we have found duplicate frequency in set
                return false;
            }
            st.insert(freq);// insert in set as previously it wasn't in set
        }
        return true;
    }
};