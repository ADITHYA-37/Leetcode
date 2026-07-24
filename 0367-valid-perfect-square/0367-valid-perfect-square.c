bool isPerfectSquare(int n) {
    int l=0,h=n-1;
    long long m;
    if(n==1){
        return true;
    }
    while(l<h){
        m=l+(h-l)/2;
        if ((m+1)*(m+1)==n){
            return true;
        }
        else if((m+1)*(m+1)<n){
            l=m+1;
        }
        else{
            h=m;
        }
    }
    return false;
}