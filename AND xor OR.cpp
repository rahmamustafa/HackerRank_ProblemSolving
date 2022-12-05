int andXorOr(vector<int> a) {
    int result=0;
    vector<int> stack;
    for(int i=0;i<a.size();i++){
        while(!stack.empty()){
            int ele = stack.back();
            result = result<(a[i]^ele)?a[i]^ele:result;
            if(a[i]<ele)
                stack.pop_back();
            else
                break;

        }
        stack.push_back(a[i]);  
    }
    
    return result;
}