class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> keyind = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            int num = nums[i];
            if(keyind.containsKey(target - num)){
                return new int[]{i, keyind.get(target - num)};
            }
            keyind.put(num, i);
        }
        return new int[]{};
    }
}
