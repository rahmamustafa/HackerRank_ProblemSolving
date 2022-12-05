int main() {
    
    vector<long> stack;
    vector<long> stack2;
    
    int size;
    cin>>size;
    vector<string> operations(size);

    //long maxNum=0;
    for(int i =0;i<size;i++){
        int n;
        cin>>n;
            if(n==1){
            int pushed;
            cin>>pushed;
            stack.push_back(pushed);
            }
            else{
                if(stack2.empty())
                        while(!stack.empty()){
                            stack2.push_back(stack.back());
                            stack.pop_back();
                        }
                if(n==2){
                    stack2.pop_back();
                }
                else if(n==3){
                    cout<<stack2.back()<<endl;
                }
            }
        
    }
    return 0;
}
