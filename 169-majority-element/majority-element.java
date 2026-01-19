class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> hmap=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            hmap.put(nums[i], hmap.getOrDefault(nums[i], 0) + 1);
            if(hmap.get(nums[i])>nums.length/2){
                return nums[i];
            }
        }
        return 0;
    }
}