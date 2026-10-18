class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string,vector<int>> mp;
        vector<vector<string>> ans;

        for(int i=0;i<n;i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }

        for(auto x:mp){
            vector<string> stemp;
            for(int i=0;i<x.second.size();i++){
                stemp.push_back(strs[x.second[i]]);
            }
            ans.push_back(stemp);
        }

        return ans;


    }
};
