double findMaxAverage(int* a, int n, int k) {
    int s=0;
    for(int i=0;i<k;i++){
        s+=a[i];
    }
    int c=s;
    for(int i=1;i<=n-k;i++){
        s-=a[i-1];
        s+=a[i+k-1];
        if(s>c){
            c=s;
        }
    }
    return (double)c/k;
}