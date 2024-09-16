class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> myMap; 

        for(int i  = 0; i < nums.size(); i++)
        {   
                if (myMap.count(nums[i]))  // if element is found in map i.e it have a pair, we check its index.
                {
                    if(abs(i - myMap[nums[i]] ) <= k)
                        return true;
                }

                 myMap[nums[i]] = i; // update the current element to its new index. 
        }   
        return false;

    }
};