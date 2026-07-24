int search(int* a, int n, int p) {
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if (a[m]==p){
            return m;
        }
        else if (a[m]>p){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    return -1;
}