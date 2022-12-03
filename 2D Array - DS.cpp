int hourglassSum(vector<vector<int>> arr) {
    int size=6;
    int max=-1000,sum;
    for(int i=0;i<=size/2;i++){
        for(int j=0;j<=size/2;j++){
            sum = arr[i][j]+ arr[i+2][j]+arr[i+2][j+1]
                +arr[i+1][j+1]+arr[i][j+1]+arr[i][j+2]+arr[i+2][j+2];
            if(sum>max)
                max = sum;
        }
    }
    return max;
    
}