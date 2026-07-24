int findMaxConsecutiveOnes(int* a, int n) {
    int c=0,ans=0;
    if (n==1){
        if(a[0]==0){
            return 0;
        }
        else {
            return 1;
        }
    }
    for(int i=0;i<n;i++){
        if (a[i]!=1){
            c=0;
            continue;
        }
        c++;
        if (c>ans){
            ans=c;
        }
    }
    return ans;
}