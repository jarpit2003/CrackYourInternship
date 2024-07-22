class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int>rex;
        for(auto p:nums)
        {
         rex.insert(p);
        }
        nums.clear();
        for(auto x:rex)
        {
            nums.push_back(x);
        }
        return nums.size();
    }
};