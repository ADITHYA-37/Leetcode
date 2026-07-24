int arrangeCoins(int n) {
    if (n==1){
        return 1;
    }
    int l=0,h=n-1;
    long long m;
    while(l<=h){
        m=l+(h-l)/2;
        if (m*(m+1)/2==n){
            return m;
        }
        else if(m*(m+1)/2<n){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return h;
}