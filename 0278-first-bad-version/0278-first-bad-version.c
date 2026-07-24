// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int l=0,h=n-1,m;
    bool x,y;
    while(l<=h){
        m=l+(h-l)/2;
        if ((isBadVersion(m)==false)&&(isBadVersion(m+1)==true)){
            return m+1;
        }
        else if((isBadVersion(m)==false)&&(isBadVersion(m+1)==false)){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return -1;

}