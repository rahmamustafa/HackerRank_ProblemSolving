import java.util.*;
class Solution {
    public boolean containsDuplicate(int[] nums) {
        int count=1;
        Map<Integer, Integer> dict = new Hashtable<Integer, Integer>();
        for(int i : nums){
            if(dict.get(i)!=null){
                //System.out.print(dict.get(i)+1);
                dict.put(i,dict.get(i)+1);
            }
            else
                 dict.put(i,0);
        }
        for(int key: dict.keySet()){
            if(dict.get(key)>0){
                count=0;
                break;

            }
        }
        return count==0?true:false;
}
}