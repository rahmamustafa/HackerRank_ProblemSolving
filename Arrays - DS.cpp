vector<int> reverseArray(vector<int> a, int size) {
    int temp;
    cout<<"size "<<size;
    for(int i=0;i<size-1;i++,size--){
        temp=a[i]; //1
        a[i] = a[size-1]; // 2
        a[size-1] = temp; //1

    }
    return a;
}