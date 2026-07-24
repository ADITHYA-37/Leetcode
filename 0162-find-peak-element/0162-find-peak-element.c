int findPeakElement(int* a, int n) {
    int l=0,h=n-1,m;
    if(n==1){
        return 0;
    }
    if(n==2){
        if(a[0]>a[1]){
            return 0;
        }
        else{
            return 1;
        }
    }
    if (a[0]>a[1]){
        return 0;
    }
    else if(a[n-1]>a[n-2]){
        return n-1;
    }
    while (l<=h){
        m=(l+h)/2;
        if ((a[m]>a[m-1]) && (a[m]>a[m+1])){
            return m;
        }
        else if(a[m]<a[m-1]){
            h=m;
        }
        else if (a[m]<a[m+1]){
            l=m;
        }
    }
    return -1;
}