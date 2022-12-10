class Solution {
    public boolean isValidSudoku(char[][] nums) {
        boolean ans=true; 
        for(int i=0;i<nums.length;i++){
            Set<Character> row = new HashSet<Character>();
            Set<Character> col = new HashSet<Character>();
            for(int j=0;j<nums.length;j++){
                if((nums[i][j]!='.') && !row.add(nums[i][j]))
                    return false;
                if((nums[j][i]!='.') && !col.add(nums[j][i]))
                    return false;
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                if(!validCupe(i,j,nums))
                    return false;
            }
        }
        return true;
    }
    public boolean validCupe(int row,int col,char[][] nums) {
            Set<Character> cupe = new HashSet<Character>();
             for(int i=row;i<row+3;i++){
                 for(int j=col;j<col+3;j++){
                    if(nums[i][j]!='.' && !cupe.add(nums[i][j]))
                    return false;
                 }
             }
             return true;
         }

}