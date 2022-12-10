class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Set<List<Integer>> ans = new HashSet<List<Integer>>();
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<nums.length;j++){
                if(i==j)
                    continue;
                int sum = nums[i]+nums[j];
                for(int k=0;k<nums.length;k++){
                    if(k==i||k==j)
                        continue;
                    if(sum+nums[k]==0){
                        List<Integer> list = new ArrayList<Integer>(Arrays.asList(nums[i], nums[j], nums[k]));
                        Collections.sort(list);
                        ans.add(list);
                   }
                }
            }
        }
        List<List<Integer>> arr;
        arr = List.copyOf(ans);
        return arr;
    }
}