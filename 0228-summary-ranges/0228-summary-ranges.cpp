class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> ans;
        int i = 0;

        for(int j = 0; j < nums.size(); j++)
        {
            i = j;

            while(i + 1 < nums.size() && nums[i + 1] == nums[i] + 1)
            {
                i++;
            }

            if(i == j)
            {
                ans.push_back(to_string(nums[j]));
            }
            else
            {
                ans.push_back(to_string(nums[j]) + "->" + to_string(nums[i]));
            }

            j = i;
        }

        return ans;
    }
};