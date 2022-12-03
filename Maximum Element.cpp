#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);


int main()
{
   
    vector<long> maxNumbers;
    vector<long> stack;
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
            if (maxNumbers.empty()||pushed>maxNumbers.back())
                maxNumbers.push_back(pushed);
            }
            else if(n==2){
                int deletedNum = stack.back();
                stack.pop_back();
                if(deletedNum==maxNumbers.back())
                    maxNumbers.pop_back();
            }
            else if(n==3){
               cout<<maxNumbers.back()<<endl;
            }
        
    }
    return 0;
}

