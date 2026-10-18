class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> vp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto x:mp){
            vp.push_back({x.second,x.first});
        }

        sort(vp.rbegin(),vp.rend());
        vector<int> ans;
        if(k>vp.size()) return{};

        for(int i=0;i<k;i++){
            ans.push_back(vp[i].second);
        }

        return ans;
    }
};
