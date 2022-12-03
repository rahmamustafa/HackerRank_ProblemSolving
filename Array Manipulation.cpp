long arrayManipulation(int n, vector<vector<int>> queries) {
   vector<long> arr;
    arr.resize(n+1,0);
    long max = 0.0;
    long sum=0.0;
    for(int j=0;j<queries.size();j++){
        arr[queries[j][0]-1] += queries[j][2];
        arr[queries[j][1]]   -= queries[j][2];       
    }
    
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
         if(max<sum)
            max = sum;
    }   
    return max;
}