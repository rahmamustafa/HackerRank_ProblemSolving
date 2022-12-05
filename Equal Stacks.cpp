int equalStacks(vector<int> s1, vector<int> s2, vector<int> s3) {
    
    int sum1=0,sum2=0,sum3=0;

    for (int i = 0; i < s1.size(); i++) {
       sum1+=s1[i];
    }
    for (int i = 0; i < s2.size(); i++) {
       
        sum2+=s2[i];
    }
    for (int i = 0; i < s3.size(); i++) {
        sum3+=s3[i];
    }

    while(!(sum1==sum2&&sum1==sum3)){
        if(sum1>=sum2 && sum1>=sum3){
            sum1-=s1.front();
            //cout<<s1.back();
            s1.erase(s1.begin());
        }
        else if(sum2>=sum3 && sum2>=sum1){
            sum2-=s2.front();
            //cout<<s2.back();
            s2.erase(s2.begin());

        }
        else{
            sum3-=s3.front();
            //cout<<s3.back();
            s3.erase(s3.begin());

        }
       
    }

    return sum1;

}