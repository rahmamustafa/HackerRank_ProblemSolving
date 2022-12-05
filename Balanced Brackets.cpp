string isBalanced(string s) {
    if(s.size()%2!=0)
        return "NO";
    vector<char> stack;
    stack.reserve(s.size());
//char type[6] = {'{', '(' ,'[','}' ,')' ,']'};
    if(stack.empty()){
        char ele = s[0];
        if(ele==')'||ele=='}'||ele==']')
            return "NO";
    }
     for(int i=0;i<s.size();i++){
        char ele = s[i];
        if(ele=='{'||ele=='('||ele=='['){
            //cout<<ele;
            stack.push_back(ele);
            //cout<<"push "<<stack.back()<<"  ";

        }
        else if(ele==')'||ele=='}'||ele==']'){
             switch (ele) {
                case '}':
                    if(stack.back()=='{')
                        stack.pop_back();
                    break;
                case ')':
                    if(stack.back()=='(')
                        stack.pop_back();
                    break;
                case ']':
                    if(stack.back()=='[')
                        stack.pop_back();
                    break;
            }
        }
        
    }        
    return stack.empty()?"YES":"NO";
}