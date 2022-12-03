vector<int> rotateLeft(int d, vector<int> arr) {
    int firstItem;
    for(int j=0;j<d;j++){
        firstItem=arr[0];
        for(int i=0;i<arr.size()-1;i++){
            arr[i] = arr[i+1];
        }
        arr[arr.size()-1]=firstItem;
   }
   return arr;
}
