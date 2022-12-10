class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        for(int i=0;i<nums.length-2;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int target = -1 * nums[i];
            int low = i+1;
            int high = nums.length-1;
            while(low<high){
                if(nums[low]+nums[high]==target){
                    ans.add(new ArrayList<Integer>(Arrays.asList(nums[low], nums[high], nums[i])));
                    while(low<high && nums[low]==nums[low+1]) low++;
                    while(low<high && nums[high]==nums[high-1]) high--;
                    low++;
                    high--;
                }
                else if(nums[low]+nums[high]<target){
                    low++;
                }
                else
                    high--;
            }
        // -4 -1 -1 0 1 2
           
        }
        return ans;
    }
    
}