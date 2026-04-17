class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                return true;
            }
        }

        return false;
        
    }
};

//for this problem i simply first sorted the array and then i checked if current element is equal to the previous element and then it just solved the problem