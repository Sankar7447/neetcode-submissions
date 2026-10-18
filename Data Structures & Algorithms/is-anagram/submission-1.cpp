class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mx;
        for(auto x:s){
            mp[x]++;
        }

        for(auto x:t){
            mx[x]++;
        }

        for(auto x:t){
            if(mp.find(x)!=mp.end()){
                if(mp[x]!=mx[x]) return false;
            }
            else return false;
        }

        for(auto x:s){
            if(mx.find(x)!=mx.end()){
                if(mp[x]!=mx[x]) return false;
            }
            else return false;
        }

        return true;
    }
};
