vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int> arr;
    int sum=0;
    for(int i=0;i<queries.size();i++){
        sum=0;
        for(int j=0;j<stringList.size();j++){
            if(queries[i]==stringList[j])
                sum+=1; 
        }
        arr.push_back(sum);
    }
    return arr;
}